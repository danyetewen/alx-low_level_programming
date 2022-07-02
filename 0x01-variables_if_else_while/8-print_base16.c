#include <std lib.h>
#include <stdio.h>
#include <time.h>

/**
*main- entry point
*Return: zero on success
*/

int main(void)
{
	char num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}

	num = 'a';

	while (num <= 'f')
	{
		puchar('\n');
		num++;
	}
	putchar('\n');
	return (0);
}
