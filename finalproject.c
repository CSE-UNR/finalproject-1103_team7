/* 
Authors: Suebin Hur and Raina Santos
Final Project - Image Selection
Section 1103 - Team 7
Purpose: Final Group Project 
Date: May, 07 2024 
*/

#include <stdio.h> 
#include <stdbool.h>

//function prototypes here 

int main(){
//declare variables 


//main menu loop 
	//mainMenu(); 


//enter switch for diff cases using functions made 
	//case 0: 
		
	//case 1:
		//loadImg(); 
	//case 2:
		//displayImg(); 
	//case 3:
		//editImgMenu(); 
	//default: 
		printf("Invalid option. Plese try again"); 
	
return 0;
}


//functions start here !!  
//1. display menu function
int mainMenu(){
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
	while ((catText = fgetc(outputFile))!= EOF){
		printf("%c", catText);
		}
		return 0;
	}

//4. edit image menu function
	int editImgMenu(){
		int editChoice;
		printf("**EDITING**\n");
		printf("1: Crop Image\n");
		printf("2: Dim Image\n");
		printf("3: Brighten Image\n");
		printf("0: Return to main menu\n");   
		printf("Choose from one of the options above: \n");
		scanf("%d", &editChoice);
		return 0;
		}
		

//5. crop image function 
	int cropImg(){
	
	}


//6. dim image function 
	int dimImg(){
	

//7. brighten image function 
	int brightenImg(){
	char readChar, ___;
		for(readChar == " "){
			printf("."); 
		}
	}


//8. save image function 
	int saveImg(){
	char newImg;
		outputFile = fopen(newcat.txt, "w");
			if(outputFile == NULL){
				printf("File does not exist.");
				}
		fprintf("%c", newImg);
		fclose(outputFile);
		printf("New file successfully created!");
		}

//9. extra credit: rotate image function 

