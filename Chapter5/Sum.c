/*
GOAL: 
- create program Sum.c
- copy the two functions
- test the functions and see what they do
- give the functions meaningful names
- add comments
- add printf to the beginning of the functions to print their arguments


OUTPUT:
- FunctionOne: adds all of the values between two numbers
- FunctionTwo: multiplies all of the values between two numbers
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

int AdditiveFactorial (int m, int n)
{
//ARGUMENT VALUES
  printf("m: %i, n: %i\n", m, n);

//BASE CASE
  if (m == n)
  {
    return n;
  }
  else 
  {
//RECURSION
    return m + AdditiveFactorial (m+1, n);
  }
}

int Factorial (int m, int n)
{
//ARGUMENT VALUES
  printf("m: %i, n: %i\n", m, n);

//BASE CASE
  if (m == n)
  {
    return n;
  }
  else
  {
//RECURSION
    return n * Factorial (m, n-1);
  }
}

int main (void)
{
//CALL FUNCTION
int resultOne = AdditiveFactorial(1, 5);
printf("%i\n", resultOne);

int resultTwo = Factorial(1,5);
printf("%i\n", resultTwo);

//EXIT MAIN
return 0;
}
