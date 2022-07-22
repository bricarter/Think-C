/*
GOALS:
- create a function IndexOfMaxInRange()
- parameters: array of integers, length of array, target int
- search through the array for target
- return the first index value of target
- if target is not in array return an invalid index value/error condition
- create a function SwapElement()
- parameters: array of integers, two indices
- swaps the array elements at the two indices
- create a function SortArray()
- parameters: array of integers
- uses IndexOfMaxInRange() and SwapElements()
- sorts the array from largest to smallest

TODO:
//CREATE VARIABLES
//PRINT EACH VARIABLE ON THEIR OWN LINE
//EXIT MAIN

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

int IndexOfMaxInRange(int array[], int length)
{
int max = 0;
int index = 0;

 for(int i = 0; i < length; i++)
{
if (array[i] > max)
{
 max = array[i];
 index = i;
}
}
return index;
}

void SwapElements(int array[], int indexOne, int indexTwo)
{
int swap = array[indexOne];
array[indexOne] = array[indexTwo];
array[indexTwo] = swap;
}

void SortArray(int initial[], int length, int sorted[])
{
 for (int i = 0; i < length; i++)
{
 SwapElements(initial, IndexOfMaxInRange(initial, length), i);
 sorted[i] = initial[i];
 initial[i] = 0;
}
}


int main(void)
{

int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
int length = sizeof(array) / sizeof(array[0]);
int largerToSmaller[length];

printf("BEFORE: ");
for (int i = 0; i < length; i++)
{
 printf("%i ", array[i]);
}
printf("\n");


//CALL FUNCTION
SortArray(array, length, largerToSmaller);


printf("AFTER: ");
for (int i = 0; i < length; i++)
{
 printf("%i ", largerToSmaller[i]);
}
printf("\n");


//EXIT MAIN
return 0;
}
