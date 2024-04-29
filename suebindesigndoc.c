/*Final Project Design 
DATA
Variables 
Current image
File Name 
Dimensions 
Editing Choice (from menu) 
Save Image 
Crop pixels 
Brightness 
Arrays 
Image Data (pixels) 
Menu Options (editing) 
Brightness levels 
Cropped image data
Rotated image data 
Menu Options 
Load a new Image 
Display current Image 
Edit Current Image 
Exit program
Editing Menu 2 Options 
Crop 
Dim 
Brighten
Rotate 

HOW THE PROJECT WORKS 
Initialize the variables to tore the current image, file names, and pixels 
Define the arrays necessary 
Display the main menu with options for the user (this will loop until the user chooses to exit) 
Prompt user for the file name of the image they choose to load 
Read the file contents and store in array 
Display the image 
Now, show the second menu (submenu) for editing options 
Prompt user for choice and execute option 
Keep showing + saving +executing user choices until exit 
When the user exits, prompt for a filename (in c) and save the image 
Display Goodbye message that lets the user know

FUNCTIONS
*extra credit 
Main Function 
Data: selection; loops; functions; formatted Io; File IO; arrays/2d Arrays 
Functionality: Keeps displaying the menu to get user input until the user is either a) done or b) decides to exit/stop the program.
Other Functions
Load Image Function 
Data: File IO; Arrays/2D Arrays 
Functionality: Prompts he user to input a file (preferably a c file name); reads the contents of said file 
Display Image Function
Data: Formatted IO; arrays/2D Arrays 
Functionality: Display the current image to the user. 
Edit Image Function 
Data: Selection; functions 
Functionality: Display a second menu for specific editing options; takes user input; executes the choice given by user 
Crop Image Function 
Data: Selection; Loops; arrays/2d arrays 
Functionality: specify smaller section of original image (potentially using pixel specifications); update original/current image 
Dim Image Function 
Data: expressions; arrays/2d arrays
Functionality: decrease the brightness of the current image (using pixels) 
Brighten Image Function 
Data: expressions; array and 2d arrays 
Functionality: increase the brightness of the current image (using pixels) 
*Rotate Image Function* 
Data: selection; loops; arrays/2d arrays 
Functionality: rotate the image by 90° clockwise or counterclockwise; moves the pixels to new location to achieve the rotation wanted 
Save Image Function 
Data: File IO; arrays/2d arrays 
Functionality: prompt the user for a file name; save the new, edited image as a c file */
