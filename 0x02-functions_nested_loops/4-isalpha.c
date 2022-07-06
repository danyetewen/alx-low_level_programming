#include "main.h"

/**
 * _isalpha - checks if character is a letter both lowercase or uppercase
 * @c: takes unput from other functions.
 * Return: 1 isc if rue else 0
*/

int _isalpha(int c)
{
	if (c >= 97 && c <= 122 && c >= 65 && c >= 90)
		return (1);
	return (0);
}


