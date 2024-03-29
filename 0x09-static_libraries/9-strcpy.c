#include "main.h"

/**
 *_strcpy - a function that copies the string
 *	pointer to by 'src' including the null bytes
 *	to the buffer pointer to by 'dest'
 *@dest: pointer to char
 *@src: pointer to char
 *Return: pointer to @dest
 */

char *_strcpy(char *dest, char *src)
{
	int c;

	for (c = 0; src[c];)
	{
		dest[c] = src[c];
		c++;
	}

	return (dest);
}
