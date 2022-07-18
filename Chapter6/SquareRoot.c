/*
GOAL: 
- create a function SquareRoot()
- parameters: double
- returns approximate square root of the parameter
- use the algorithm
- iterate until the absolute value of two consecutive estimates differ by less than .0001
- do not use sqrt()
- can use fabs()

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


double SquareRoot(double number)
{

double initialGuess = number/2;
double nextGuess = (initialGuess + number/initialGuess)/2;

while (fabs(nextGuess - initialGuess) > .001)
{
  initialGuess = nextGuess;
  nextGuess = (initialGuess + number/initialGuess)/2;
}

return nextGuess;

}


int main(void)
{

  //CALL FUNCTION
  double root = SquareRoot(25);
  printf("%f\n", root);

  //EXIT MAIN
  return 0;
}
