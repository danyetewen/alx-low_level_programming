#include "main.h"

/**
 * _isupper - ccheck if c is upper
 * @c: input for alphabet
 * Return: only success
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
