#include "main.h"

/**
 * main -entry point
 *
 * Description prints_putchar using putchar prototype
 *
 * Return: 0 when successful
*/

int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ++ch)
		_putchar(str[ch]);
	_putchar('\n');

	return (0);
}
