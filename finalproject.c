/* 
Authors: Suebin Hur and Raina Santos
Purpose: Final Group Project 
Date: May, 07 2024 
*/

#include <stdio.h> 
#include <stdbool.h>
#define CAT_ARRAY 50
//function prototypes here 

int main(){
//declare variables 
	FILE *catOutputFile;
	int mainMenu();
	int loadImg(int catSize[row][col]);
	int row, col;

//main menu loop 
	//mainMenu(); 


/*enter switch for diff cases using functions made 
	 switch(){
	case 0: 
		printf("Exiting the program. Goodbye!");
	break;
	case 1:
		loadImg(); 
	break;
	case 2:
		displayImg(); 
	break;
	case 3:
		editImgMenu(); 
	break;
	default: 
		printf("Invalid option. Plese try again"); 
	}
	
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
	return 0; 
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
	int cropImg(){
	
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
	int brightenImg(){
	char readChar, ___;
		for(readChar =){
			printf("."); 
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
>>>>>>> 56604d5f7edf0615590ad42a4bc126a50fe21711
