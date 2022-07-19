/*
GOAL: 
- create a function Gauss()
- parameters: x, int n
- returns the sum of the first n terms of the series
- do not use factorial() or pow()


TODO:

//CREATE VARIABLES
//PRINT EACH VARIABLE ON THEIR OWN LINE
//EXIT MAIN
//TEST FORMULA

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
  while (n > 0)
  {
    x *= x;
    n--;
  } 
  return x;
}

double Guass(double x, int n)
{
  double result = 1;
  
  while (n > 0)
{
result += (Power(-1, n) * (n+1) * Power(x, n)) / n;
n--;
}
return result;
}


int main(void)
{
//CALL FUNCTION
double result = Guass(1,4);
printf("%f\n", result);

//EXIT MAIN
return 0;
}
