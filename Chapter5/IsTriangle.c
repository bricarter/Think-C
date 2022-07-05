/*
GOAL: 
- create function IsTriangle()
- parameters: three ints
- if any of the three lengths is greater than the sum of the other two, you cannot form a triangle
- returns TRUE or FALSE



TODO:
//CREATE VARIABLES
//PRINT EACH VARIABLE ON THEIR OWN LINE
//EXIT MAIN
//TEST FORMULA

//CONDITIONAL STATEMENT
//ERROR MESSAGE
//SUCCESS MESSAGE

//CREATE FUNCTION 
//CREATE FUNCTION STATEMENT
//CALL FUNCTION
//SET PARAMETERS
//SET RETURN TYPE
//SET RETURN VALUE

*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>


int IsTriangle(int sideOne, int sideTwo, int sideThree)
{
 #define FALSE 0
 #define TRUE 1 
 
//CONDITIONAL STATEMENT
if (sideOne + sideTwo < sideThree)
{
  //ERROR MESSAGE
  return FALSE;
}
else
{
  //SUCCESS MESSAGE
  return TRUE;
}
}

int main (void)
{
//CALL FUNCTION
int triangle = IsTriangle(3, 4, 8);
printf("%i\n", triangle);

//EXIT MAIN
return 0;
}
