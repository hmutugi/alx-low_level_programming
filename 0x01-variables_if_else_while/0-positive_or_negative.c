
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/*
*main - main block
*description: assign randon number to variable
*print if if positive negative or zero
*Return: 0
*/
main()

int main(void)/* main description */

{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
printf("%d is positive\n", n);
else if (n == 0)
printf("%d is zero\n", n);
else
printf("%d is negative\n", n);
return (0);
}
