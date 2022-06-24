/*
GOAL:
- create function Zool()
- parameters: int and two chars
- pass in 11, a, z as arguments

TODO:
//CREATE VARIABLES
//PRINT EACH VARIABLE ON THEIR OWN LINE
//EXIT MAIN

//CREATE FUNCTION 
//CREATE FUNCTION STATEMENT
//CALL FUNCTION
//SET PARAMETERS
*/


#include <stdio.h>

 
void Zool(int number, char charOne, char charTwo)
{
printf("int: %i\nchar one: %c\nchar two: %c\n", number, charOne, charTwo);
}


int main (void)
{
//CALL FUNCTION
Zool(11, 'a', 'z');

//EXIT MAIN
return 0;
}
