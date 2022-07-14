#include "main.h"
#include <string.h>

/**
 * _strcat - function tht concatenates two strings.
 * @dest: pointer to destination input
 * @src: pointer to resulting string @dest
 * Return: pointer to resulting string @dest
*/

char *_strcat(char *dest, char *src)
{
	int c = 0, c2;

	while (dest[c])
		c++;

	for (c2 = 0; src[c2]; c2++)
		dest[c++] = src[c2];

	return (dest);
}
