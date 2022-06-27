/*
GOAL: 
- create function PrintDateAmercian()
- parameters: day, month, year
- prints date in american format
- create function PrintDateEuropean()
- prints date in european format

TODO:
//CREATE VARIABLES
//PRINT EACH VARIABLE ON THEIR OWN LINE
//EXIT MAIN

//CREATE FUNCTION 
//CREATE FUNCTION STATEMENT
//CALL FUNCTION
//SET PARAMETERS
*/

#include <stdio.h>


void PrintDateAmerican(int day, int month, int year)
{
printf("%i/%i/%i\n", month, day, year);
}

void PrintDateEuropean(int day, int month, int year)
{
printf("%i.%i.%i\n", day, month, year);
}


int main (void)
{
//CALL FUNCTION
PrintDateAmerican(27, 6, 2022);
PrintDateEuropean(27, 6, 2022);


//EXIT MAIN
return 0;

}
