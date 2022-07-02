#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main- entry point
*Return:  zero on success
*/
int main(void)
{
	char leter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	letter = 'A';

	while (letter <= 'Z')
	{
		putchar(letter);
		letter++;
	}

	puchar('\n');
	return (0);
}
