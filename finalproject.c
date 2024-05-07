/* 
Authors: Suebin Hur and Raina Santos
Purpose: Final Group Project 
Date: May, 07 2024 
*/

#include <stdio.h> 
#include <stdbool.h>
#define CAT_ARRAY 50

//function prototypes here 
int displayMenu(); 
int loadImg(char catArray[][CAT_ARRAY], int *row, int *col); 
void displayImg(char catArray[][CAT_ARRAY], int *row, int *col); 
int editImg(char catArray[][CAT_ARRAY], int *row, int *col); 
void cropImg(char catArray[][CAT_ARRAY], int *row, int *col); 
void dimImg(char catArray[][CAT_ARRAY], int row, int col); 
void brightenImg(char catArray[][CAT_ARRAY], int row, int col); 
void saveImg(char catArray[][CAT_ARRAY], int row, int col); 

int main(){
//declare variables 
	int row = 0; 
	int col = 0;
	char catArray[CAT_ARRAY][CAT_ARRAY]; 
	int choice; 
	int editChoice; 

// enter switch for diff cases using functions made 
	do{
		choice = displayMenu(); 
		switch(choice){
			case 1: 
				loadImg(catArray, &row, &col);
				break; 
			case 2: 
				displayImg(catArray, &row, &col);
				break;
			case 3: 
				editChoice = editImg(catArray, &row, &col); 
				if(editChoice < 0 || editChoice>3){
				printf("Invalid option, please try again.\n"); 
				break; 
			}
			switch(editChoice){
				case 1: 
					cropImg(catArray, &row, &col); 
					break; 
				case 2: 
					dimImg(catArray, row, col); 
					break; 
				case 3: 
					brightenImg(catArray, row, col); 
					break; 
				case 0: 
					break; 
				
			}
				break; 
			case 0: 
				printf("\nGoodbye!\n"); 
				break; 
			default:
				printf("Invalid option, please try again.\n"); 
			}
	} while(choice != 0); 
	
	return 0; 
}

//functions start here !!  
//1. display menu function
int displayMenu(){
	int choice; 
	printf("**ERINSTAGRAM**\n"); 
	printf("1: Load image\n");
	printf("2: Display image\n");
	printf("3: Edit image\n");
	printf("0: Exit \n"); 
	printf("\n");
	printf("Choose from one of the options above: ");
	scanf("%d", &choice); 
	return choice; 
}

//2. load image function 
	int loadImg(char catArray[][CAT_ARRAY], int *row, int *col){
		FILE *inputFile; 
		inputFile = fopen("cat.txt", "r"); 
			if (inputFile == NULL){
				printf("File does not exist.");
				return 1; 
			}
			
		fscanf(inputFile, "%d %d", row, col); 
			for(int i=0; i < *row; i++){
				for(int j= 0; j < *col; j++){
					fscanf(inputFile, " %c", &catArray[i][j]); 
				}
			}
			fclose(inputFile); 
			printf("Image successfully loaded!\n"); 
			return 0; 
	}
	
//3. display image fuction
	void displayImg(char catArray[][CAT_ARRAY], int *row, int *col){
		for(int i=0; i < *row; i++){
			for(int j=0; j < *col; j++){
				printf("%c", catArray[i][j]);
			}
			printf("\n"); 
		}
	}

//4. edit image menu function
	int editImg(char catArray[][CAT_ARRAY], int *row, int *col){
		int editChoice;
		printf("**EDITING**\n");
		printf("1: Crop Image\n");
		printf("2: Dim Image\n");
		printf("3: Brighten Image\n");
		printf("0: Return to main menu\n");   
		printf("Choose from one of the options above: ");
		scanf("%d", &editChoice);
		return editChoice; 
		}
		

//5. crop image function 
	void cropImg(char catArray[][CAT_ARRAY], int *row, int *col){
		int right, left, bottom, top; 
		printf("The image you want to crop is %d x %d.\n", *row, *col); 
		printf("The row and column values start in the upper lefthand corner.\n"); 
		printf("Which column do you want to be the new left side? ");
		scanf("%d", &left); 
		printf("Which column do you want to be the right left side? ");
		scanf("%d", &right); 
		printf("Which row do you want to be the new top? ");
		scanf("%d", &top); 
		printf("Which row do you want to be the new bottom? ");
		scanf("%d", &bottom); 
		
		if(left< 0 || right >= *col || left >=  right){
			printf("Invalid column value. Choose a value between %d and %d: ", left, right); 
			return; 
		}
		if(top <0 || bottom >= *row || top >= bottom){
			printf("Invalid row value. Choose a value betwee %d and %d: ", top, bottom); 
			return; 
		}
		*col = right - left +1; 
		*row = bottom - top +1; 
		
		char croppedImg[CAT_ARRAY][CAT_ARRAY];
		for(int i=0; i< *row; i++){
			for(int j=0; j< *col; j++){
				croppedImg[i][j] = catArray[top +i][left +j];
			}
		}
		for(int i=0; i< *row; i++){
			for(int j=0; j< *col; j++){
				catArray[i][j] = croppedImg[i][j];
			}
		}
	}



//6. dim image function 
	void dimImg(char catArray[][CAT_ARRAY], int row, int col){
		for(int i=0; i<row; i++){
			for(int j=0; j<col; j++){
				if(catArray[i][j] == '.'){
					printf(" ");
				}
				else if(catArray[i][j] == 'o'){
					printf("."); 
				}
				else if(catArray[i][j] == 'O'){
					printf("o");
				}
				else if(catArray[i][j] == '0'){
					printf("O"); 
				}
			}
		
		}
	}
	

//7. brighten image function 
	void brightenImg(char catArray[][CAT_ARRAY], int row, int col){
		for(int i = 0; i < row; i++)
			for(int j = 0; j <col; j++){
				switch(catArray[i][j]){
					case '.':
						catArray[i][j] = 'o'; 
						break; 
					case 'o': 
						catArray[i][j] = 'O';
						break; 
					case 'O':
						catArray[i][j] = '0'; 
						break; 
					case '0': 
						break; 
					default: 
						break; 
				}
			}
	}

//8. save image function 
	void saveImg(char catArray[][CAT_ARRAY], int row, int col){
		FILE *catOutputFile; 
		catOutputFile = fopen("newcat.txt", "w");
			if(catOutputFile == NULL){
				printf("File does not exist.");
				}
			fprintf(catOutputFile, "%d %d\n", row, col); 
			
			for(int i=0; i<row; i++){
				for(int j=0; j<col; j++){
					fprintf(catOutputFile, "%c ", catArray[i][j]); 
				}
				fprintf(catOutputFile, "\n"); 
			}
			fclose(catOutputFile); 
			printf("New file successfully created!"); 
	}

//9. extra credit: rotate image function 

