#include "main.h"
#include "_putchar.c"
/**
 * _puts - prints a string, followed by a newling to stdout
 * @str: string parameter to print
 * Returning: nothing
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		++str;
	}
	_putchar('\n');
}
