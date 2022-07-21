/*
GOAL: 
- create a function Target()
- parameters: array of ints, length of array, target int
- search through the array for target
- return the first index value of target
- if target is not in array return an invalid index value/error condition


TODO:
//CREATE VARIABLES
//PRINT EACH VARIABLE ON THEIR OWN LINE
//EXIT MAIN

//CREATE LOOP
//PRINT EACH ON A LINE

//CONDITIONAL STATEMENT
//ERROR MESSAGE
//SUCCESS MESSAGE

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


int Target(int array[], int length, int target)
{

for (int i = 0; i < length; i++)
{
  //CONDITIONAL STATEMENT
  if (array[i] == target)
  {
    //SUCCESS MESSAGE
    return i;
  }
}
//ERROR MESSAGE
return -1;
}  
  

int main(void)
{

int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
int length = sizeof(array) / sizeof(array[0]);

int targetIndex = Target(array, length, 3);
printf("Target is at index: %i\n", targetIndex);

//EXIT MAIN
return 0;

}
