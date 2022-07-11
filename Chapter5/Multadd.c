/*
GOAL: 
- transform Multadd() into a fruitful function
- returns the result instead of printing it
- store the result in a variable and print it
- transform Yikes()


TODO:
//CREATE VARIABLES
//PRINT EACH VARIABLE ON THEIR OWN LINE

//SET RETURN TYPE
//SET RETURN VALUE
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

double Multadd(double a, double b, double c)
{
return a * b + c;
}

double Yikes(double x)
{
  double a = x;
  double b = exp(-x);
  double c = sqrt(1 - b);
  double multaddization = Multadd(a, b, c);
  return multaddization;
}

int main(void)
{
double multaddization = Multadd(1.0, 2.0, 3.0);
printf("%f\n", multaddization);

double yikesMultaddization = Yikes(1.0);
printf("%f\n", yikesMultaddization);

//EXIT MAIN
return 0;
}
