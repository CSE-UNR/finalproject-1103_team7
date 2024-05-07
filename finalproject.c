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
int editImg(); 
void cropImg(char catArray[][CAT_ARRAY], int *row, int *col); 
void dimImg(char catArray[][CAT_ARRAY], int *row, int *col); 
void brightenImg(char catArray[][CAT_ARRAY], int *row, int *col); 
void saveImg(char catArray[][CAT_ARRAY], int *row, int *col); 

int main(){
//declare variables 
	FILE *catOutputFile;
	int mainMenu();
	int loadImg(int catSize[row][col]);
	int row, col;
	row = 0, col = 0; 
	char catArray[CAT_ARRAY][CAT_ARRAY]; 
	int choice; 

// enter switch for diff cases using functions made 
	do{
		choice = displayMenu(); 
		switch(choice){
			case 1: 
				loadImg(catArray, &row, &col);
				break; 
			case 2: 
				displayImag(catArray, &row, &col)
				break;
			case 3: 
				editImg(catArray, row, col); 
			case 0: 
				printf("\nGoodbye!\n"); 
				break; 
			default:
				printf("Invalid option, please try again.\n"); 
			}
	} while(choice != 0); 
	
	return 0; 
}
*/
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
	int loadImg(){
		outputFile = fopen("cat.txt", "r");
			if (outputFile == NULL){
				printf("File does not exist.");
				}
		fprintf(outputFile, "cat\n");
		fclose(outputFile);
		printf("Created cat.txt.");
	}
//3. display image fuction
	char displayImg(){
	char catText;
	){
		printf("%c", catText);
		}
		return 0;
	}

//4. edit image menu function
	int editImg(){
		int editChoice;
		printf("**EDITING**");
		printf("1: Crop Image");
		printf("2: Dim Image");
		printf("3: Brighten Image");
		printf("0: Return to main menu");   
		printf("Choose from one of the options above: ");
		scanf("%d", &editChoice);
		return 0;
		}
		

//5. crop image function 
	void cropImg(char catArray[][CAT_ARRAY], int *row, int *col){
		int right, left, bottom, top; 
		printf("The image you want to crop is %d x %d.\n", *row, *col); 
		printf("The row and column values start in the upper lefthand corner.\n"); 
	}



//6. dim image function 
	int dimImg(){
	char readChar;
		
		for(readChar = 0; readChar != 0; readChar++){
			if (readChar = "."){
				printf(" ");
			}
		}
		for(readChar = 0; readChar != 0; readChar++){
			if (readChar = "o"){
				printf(".");
			}
		}
		for(readChar = 0; readChar != 0; readChar++){
			if (readChar = "O"){
				printf("o");
			}
		}
		for(readChar = 0; readChar != 0; readChar++){
			if (readChar = "0"){
				printf("O");
			}
		}
	}
	

//7. brighten image function 
	void brightenImg(char catArray[][CAT_ARRAY], int row, int col){
		for(int i = 0; i < row; i++)
			for(int j = 0; j <col; j++){
				switch(catArray[i][j]){
					case '.':
						catArray[i][j] = "o"; 
						break; 
					case 'o': 
						catArray[i][j] = "O"; 
						break; 
					case 'O':
						catArray[i][j] = "0"; 
						break; 
					case '0': 
						break; 
					default: 
						break; 
				}
			}
	}

//8. save image function 
	int saveImg(){
	char newImg[];
		catOutputFile = fopen("newcat.txt", "w");
			if(catOutputFile == NULL){
				printf("File does not exist.");
				}
		fprintf("%s", newImg);
		fclose(catOutputFile);
		printf("New file successfully created!");
		}

//9. extra credit: rotate image function 

