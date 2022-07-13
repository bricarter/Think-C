/*
GOAL: 
- create a function Distance()
- parameters: four doubles x1, y1, x2, y2
- prints the distance
- use SumSquares()


TODO:
//CREATE VARIABLES
//PRINT EACH VARIABLE ON THEIR OWN LINE
//EXIT MAIN
//TEST FORMULA

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


void Distance(double x1, double y1, double x2, double y2)
{
double xSquared = pow(x2 - x1, 2);
double ySquared = pow(y2 - y1, 2);
double distance = sqrt(xSquared + ySquared);
printf("%f\n", distance);
}
