#include "main.h"

/**
 * print_line - print a straight line
 * @n: is the number of times the_character should be printed
*/

void print_line(int n)
{
	int lnChar;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (inChr = 1; lnChr <= n; ++lnChr)
			_putchar('_');
		_putchar('\n');
}
