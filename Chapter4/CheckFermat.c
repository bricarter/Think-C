/*
GOAL: 
- create a function CheckFermat()
- parameters: four ints a, b, c, n
- if n is greater than 2 and the formula returns true print message success message
- else print error message
- use pow()


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
*/


#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>


void CheckFermat(int a, int b, int c, int n)
{

int aToTheN = pow(a, n);
int bToTheN = pow(b, n);
int cToTheN = pow(c, n);

//CONDITIONAL STATEMENT
if (n > 2)
{
if (aToTheN + bToTheN == cToTheN)
{
  //SUCCESS MESSAGE
  printf("Holy smokes, Fermat was wrong!\n");
}
else {
  //ERROR MESSAGE
  printf("No, that doesn't work.\n");
}
}
}

int main (void)
{

//CALL FUNCTION
CheckFermat(3, 4, 5, 3);

//EXIT MAIN
return 0;
}
