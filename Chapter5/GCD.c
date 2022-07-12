/*
GOAL: 
- create function GCD()
- parameters: two ints
- use Euclid's algorithm


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

int GCD(int a, int b)
{
  //SET BASE CASE
  if (b == 0)
{
  return a;
}
else
{
  int remainder = a % b;
  a = b;
  b = remainder;
  //CREATE RECURSION
  return GCD(a,b);
}
}


int main(void)
{

//CALL FUNCTION
int gcd = GCD(36, 20);
printf("%i\n", gcd);

//EXIT MAIN
return 0;
}
