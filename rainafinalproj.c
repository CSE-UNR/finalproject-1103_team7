/*Data:
Field: 2d Array of int (10x10)
Upload/Load pictures: File IO
System function:
User is given the option to load an image, edit the image, or exit the program. By editing the image, user can either brighten or dim the image by one level in either way. There are five brightness stages for the image, accessed through the following keys:  (space), . (period), o (lowercase o), O (uppercase O), and 0 (zero). The user should also have the option to crop and rotate the photo, and the edited photo should always be displayed. There will be an option to save the edited image to a file, and if the user wants to save the image to a file, they should be prompted for a file name.
Functions:
	main():
Data: Arrays for photos. Functions for different options. Variables for different options.
Functionality: Load image. Loop through different options until the user ends the program. Save finalized image to file.
	imgMenu():
Input Parameters:  int userSelection
Returned Output: none
Functionality: Display options for the user. 
	imgBright():
Input Parameters:  image* int imgLight int imgArray
Returned Output: int
Functionality: Brighten image by one step. All pixels should be one step lighter.
	imgDim():
Input Parameters:  image* int imgDark int imgArray
Returned Output: int
Functionality: Darken image by one step. All pixels should be darkened one step.
	saveImg():
Input Parameters:  image* int imgDim int imgBright
Returned Output: void
Functionality: Save image to a new file.
	cropImg():
Input Parameters:  image* int imgArray
Returned Output: int
Functionality: Crop image by however many pixels user inputs.
	loadImg():
Input Parameters:  image* int imgArray int imgDim int imgBright int cropImg
Returned Output: int
Functionality: Load edited photo.
/*
