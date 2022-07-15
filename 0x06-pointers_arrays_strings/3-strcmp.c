#include "main.h"
#include <string.h>

/**
 * _strcmp - a function that compares two strings
 * @s1: string 1 input to compare
 * @s2: against this other string 2
 *
 * Return: 0 if s1 and s2 are equal - if s1 < s2 and + if s1 > s2
*/

int _strcmp(char *s1, char *s2)
{
	int i = 0, r;

	while (si[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	r = s1[i] - s2[i];

	return (r);
}
