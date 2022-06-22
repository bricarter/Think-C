/*
GOAL: 
- create program MyTime.c
- variables hour, minute, second
- assign variables the current time
- use 24h clock
- calculate and print the number of seconds since midnight
- calculate and print the number of seconds remaining in the day
- calculate and print the percentage of the day that has passed
- update the variable values to make sure the program still works

TODO:
//CREATE VARIABLES
//PRINT EACH VARIABLE ON THEIR OWN LINE
//EXIT MAIN

*/

#include <stdio.h>

int main (void)
{

//CREATE VARIABLES
int seconds = 30;
int minutes = 7;
int hour = 17;

//TEST FORMULA
int hoursToMinutes = hour * 60;
int minutesToSeconds = (minutes + hoursToMinutes) * 60;
int secondsPassed = seconds + minutesToSeconds;

printf("Seconds passed since midnight: %i\n", secondsPassed);

int secondsInADay = 86400;  //24 * 60 * 60
int secondsRemaining = secondsInADay - secondsPassed;

printf("Seconds remaining in the day:  %i\n", secondsRemaining);

int percentagePassed = secondsPassed * 100 / secondsInADay;
char percent = '%';

printf("Percentage of the day that has passed: %i%c\n", percentagePassed, percent);


//EXIT MAIN
return 0;
}
