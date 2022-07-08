/*
GOAL: 
- create recursive function Power()
- parameters: double x, int n
- return x to the n
- Power (x, n) = x * Power (x, n-1)


TODO:
//CREATE VARIABLES
//PRINT EACH VARIABLE ON THEIR OWN LINE
//EXIT MAIN
//TEST FORMULA

//SET BASE CASE
//PRINT BASE
//CREATE RECURSION
//PRINT RECURSION

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

double Power(double x, int n)
{
  //SET BASE CASE
  if (n == 1)
  {
    return x;
  }
  else
  {
  //CREATE RECURSION
  return x * Power(x, n-1);
  }
}

int main (void)
{
//CALL FUNCTION
double xToTheN = Power(3,3);
printf("%f\n", xToTheN);

//EXIT MAIN
return 0;
}
