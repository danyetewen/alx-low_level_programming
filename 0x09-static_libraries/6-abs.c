#include "main.h"

/**
 * _abs - function that computes the absolute values of an integer
 * @i: take input values for the function
 * Return: Always 0 (success)
*/

int _abs(int i)
{
	/**
	 * if int value is a negative
	 * multiply by -1 to get a positive value
	*/
	if (i < 0)
		i = (-1) * i;

	return (i);
}

