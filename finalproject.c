/* 
Authors: Suebin Hur and Raina Santos
<<<<<<< HEAD
Final Project - Image Selection
Section 1103 - Team 7
*/


=======
Purpose: Final Group Project 
Date: May, 07 2024 
*/

#include <stdio.h> 
#include <stdbool.h>

//function prototypes here 

int main(){
//declare variables 


//main menu loop 




//enter switch for diff cases using functions made 




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


//6. dim image function 


//7. brighten image function 


//8. save image function 


//9. extra credit: rotate image function 
>>>>>>> 56604d5f7edf0615590ad42a4bc126a50fe21711
