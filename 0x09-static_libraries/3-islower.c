#include "main.h"

/**
 *_islower - function to check if character is lowercase
 *@c: checks input of function
 *Return: returns 1 if 'c' is lowercase otherwise always 0 (success)
 */

int _islower(int c)
{
	/*chceck if value is lowercase*/
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
