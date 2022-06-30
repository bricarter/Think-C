/*
GOAL: 
- program that writes the entire lyrics of 99 bottles of beer
- use recursion


TODO:
//CREATE VARIABLES
//PRINT EACH VARIABLE ON THEIR OWN LINE
//EXIT MAIN

//SET BASE CASE
//PRINT BASE
//CREATE RECURSION
//PRINT RECURSION

//CREATE FUNCTION 
//CREATE FUNCTION STATEMENT
//CALL FUNCTION
//SET PARAMETERS

*/

#include <stdio.h>
#include <stdlib.h>


void BottlesOfBeer(int bottles)
{
  if (bottles == 0)
  {
    printf("No bottles of beer on the wall, no bottles of beer, ya' can't take one down, ya' can't pass it around, 'cause there are no more bottles of beer on the wall!\n");
  }
  else {
  printf("%i bottles of beer on the wall, %i bottles of beer, ya' take one down, ya' pass it around, %i bottles of beer on the wall.\n", bottles, bottles, bottles - 1);
  
BottlesOfBeer(bottles - 1);
  }
}

int main (void)
{
//CALL FUNCTION
BottlesOfBeer(3);

//EXIT MAIN
return 0;
}
