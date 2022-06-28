/*

GOAL: 
- create function Multadd()
- parameters: three doubles
- prints their multadditionization
- create function Yikes()
- parameters: a double
- uses Multadd()
- prints answer to formula


TODO:
//CREATE VARIABLES
//PRINT EACH VARIABLE ON THEIR OWN LINE
//EXIT MAIN
//TEST FORMULA

//CREATE FUNCTION 
//CREATE FUNCTION STATEMENT
//CALL FUNCTION
//SET PARAMETERS

*/


#include <stdio.h>
#include <math.h>

void Multadd(double a, double b, double c)
{
printf("%f\n", a * b + c);
}

void Yikes(double x)
{
  double a = x;
  double b = exp(-x);
  double c = sqrt(1 - b);
  Multadd(a, b, c);
}

int main(void)
{
//CALL FUNCTION
Multadd(1.0, 2.0, 3.0);
Yikes(1.0);

//EXIT MAIN
return 0;
}
