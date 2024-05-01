/* Suebin Hur and Raina Santos 
CS 135 Section 1103
Erin Keith 

Final Project Design - Team 7
Data: 
	- Field: 2d Array of int (10x10)
	- Upload/Load pictures: File IO	

CS tools and Organization: 
	- Variables 
		-Current image
		-File Name 
		-Dimensions 
		-Editing Choice (from menu) 
		-Save Image 
		-Crop pixels 
		-Brightness 
	- Arrays 
		-Image Data (pixels) 
		- Menu Options (editing) 
		-Brightness levels 
		-Cropped image data
		-Rotated image data 
	- Menu Options 
		-Load a new Image 
		-Display current Image 
		-Edit Current Image 
		-Exit program
	- Editing Menu 2 Options 
		-Crop 
		-Dim 
		-Brighten
		-Rotate 

System Functions: 
User is given the option to load an image, edit the image, or exit the 			program. By editing the image, user can either brighten or dim the image by one level in either way. There are five brightness stages for the image, accessed through the following keys:  (space), . (period), o (lowercase o), O (uppercase O), and 0 (zero). The user should also have the option to crop and rotate the photo, and the edited photo should always be displayed. There will be an option to save the edited image to a file, and if the user wants to save the image to a file, they should be prompted for a file name.

Functions: 
	*extra credit 
Main Function main():
Data: selection; loops; functions; formatted Io; File IO; arrays/2d Arrays 
Functionality: Keeps displaying the menu to get user input until the user is either a) done or b) decides to exit/stop the program.

Other Functions
Load Image Function loadImg():
Data: File IO; Arrays/2D Arrays 
Functionality: Prompts the user to input a file (preferably a c file name); reads the contents of said file 
Input Parameters:  image* int imgArray int imgDim int imgBright int cropImg
Returned Output: int

Display Image Function
Data: Formatted IO; arrays/2D Arrays 
Functionality: Display the current image to the user. 
Edit Image Function 
Data: Selection; functions 
Functionality: Display a second menu for specific editing options; takes user input; executes the choice given by user 

Crop Image Function cropImg()
Data: Selection; Loops; arrays/2d arrays 
Functionality: specify smaller section of original image (potentially using pixel specifications); update original/current image 
Input Parameters:  image* int imgArray
Returned Output: int

Dim Image Function imgDim():
Data: expressions; arrays/2d arrays
Functionality: decrease the brightness of the current image (using pixels) 
Input Parameters:  image* int imgDark int imgArray
Returned Output: int

Brighten Image Function imgBright():
Input Parameters:  image* int imgLight int imgArray
Returned Output: int
Data: expressions; array and 2d arrays 
Functionality: increase the brightness of the current image (using pixels) 

*Rotate Image Function* 
Data: selection; loops; arrays/2d arrays 
Functionality: rotate the image by 90° clockwise or counterclockwise; moves the pixels to new location to achieve the rotation wanted 

Save Image Function saveImg():
Data: File IO; arrays/2d arrays 
Functionality: prompt the user for a file name; save the new, edited image as a c file 
Input Parameters:  image* int imgDim int imgBright
Returned Output: void

Menu Function imgMenu():
Input Parameters:  int userSelection
Returned Output: none
Functionality: Display options for the user. 
*/
