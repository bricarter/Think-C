/*
GOAL: 
- create program MyDate.c
- copy 'Hello, World.' program
- variables day, month, year
- assign variables to today's date
- print each value on a line by itself
- modify the program to print the date in American format mm/dd/yyyy
- modify to print American and European format

TODO:
//CREATE VARIABLES
//PRINT EACH VARIABLE ON THEIR OWN LINE
//EXIT MAIN
//MODIFY

*/

#include <stdio.h>

int main (void)
{

//CREATE VARIABLES
int day = 17;
int month = 6;
int year = 2022;

//PRINT EACH VARIABLE ON THEIR OWN LINE
  
//MODIFY
printf("American format:\n%i/%i/%i\n", month, day, year);
printf("European format:\n%i.%i.%i\n", day, month, year);

//EXIT MAIN
return 0;
}
