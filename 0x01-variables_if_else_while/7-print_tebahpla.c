#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 *main- entry point
 *Return: zero on success
*/
int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}

	putchar ('\n');
	return (0);
}
