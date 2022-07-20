/*
GOAL: 
- what is the output of this program
- modify the program to swap the first and last digit

OUTPUT:
this programs adds the frist and last digit instead of swapping them. 
ints cannot be concatenated like chars.

*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
int number = 71;
int lastDigit = number % 10;
int fistDigit = number / 10;
printf("%i%i\n", lastDigit, fistDigit);
return EXIT_SUCCESS;
}
