/*
GOAL: 
- use getchar()
- get user input, digit between 0 and 9
- test the input
- display error message and terminate if the value is not a digit
- print the input value if successful


TODO:
//CREATE VARIABLES
//PRINT EACH VARIABLE ON THEIR OWN LINE
//EXIT MAIN

//CONDITIONAL STATEMENT
//ERROR MESSAGE
//SUCCESS MESSAGE

*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int main (void)
{

printf("input a digit between 0 and 9.\n");

//CREATE VARIABLES
int userInput = getchar();

//CONDITIONAL STATEMENT
if (isdigit(userInput) == 0)
{
//ERROR MESSAGE
printf("Not a digit!\n");
return 1;
}
else {
//SUCCESS MESSAGE
printf("INPUT: %c\n", userInput);
printf("ASCII VALUE: %i\n", userInput);
}

//EXIT MAIN
return 0;
}
