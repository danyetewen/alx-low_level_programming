#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - entry point
*Return: zero on success
*/
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
