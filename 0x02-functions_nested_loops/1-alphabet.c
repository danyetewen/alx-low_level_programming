#include "main.h"

/**
*print_alphabet - uses the_putchar function to print a-z
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ++ch)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
