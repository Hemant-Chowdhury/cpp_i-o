# cpp_i-o
The repository contains useful functions which will use systematic and beautiful input and output.

Each of the cpp file contains a display( int n, int m) function which displays the data stored in a string array of dimension nxm.

To display your data first store the information in the string array.

If you need to display integers, you may use to_string function. *CAUTION: Dont forgtet to add tab after int to string function*

If you ever get any distorted matrix, you need to check the space and tab size, also check if your string is over flowing the box size. 

One of the bad problems which you may face is that there may be different sized strings and hence it may result in a distorted display.

In order to debug it you should know that a tab points the cursor to the next 8th character. A tab character should advance to the next tab stop.
*Example\n
 123456789\n
 t       t\n
 here the space between two consecutive t's is known as tab space or tab stop.*
 
So now if you have some strings smaller than tab size and some larger than tab size, you should concatenate smaller words with extra tab before storing while larger words can be stored simply.

*Mistakes Are Opportunities For Discoveries*
