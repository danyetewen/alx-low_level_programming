#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * main -> Entry point, positive negative or zero print sign of random number
 * _void: empty parameter list for main
 * Description: positive, negative value and zero
 * Return : Zero for success
**/

int main(void)

{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	if (n == 0)
		printf("%d is zero\n", n);
	if (n < 0)
{
		printf("%d is negative\n", n);
}
return (0);
}
