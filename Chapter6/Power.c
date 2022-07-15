/*
GOAL: 
- create an iterative function Power()
- parameters: double x, int n
- returns x to the n


TODO:
//CREATE VARIABLES
//PRINT EACH VARIABLE ON THEIR OWN LINE
//EXIT MAIN

//CREATE LOOP
//PRINT EACH ON A LINE

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
  while (n > 1)
  {
    x *= x;
    n--;
  }

return x;
}


int main(void)
{
  //CALL FUNCTION
  double xToTheN = Power(3,2);
  printf("%f\n", xToTheN);

  //EXIT MAIN
  return 0;
}
