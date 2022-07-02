#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 *main- entry point
 *Return: zero on success
*/

int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar(num + '0');
		if (num < 9)
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');
	return (0);
}
