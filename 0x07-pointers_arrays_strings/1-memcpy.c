#include "main.h"

/**
 *_memcpy -  function copies memory area
 *@dest: buffer where we will copy to
 *@src: what we are to copy
 *@n: n bytes of @src
 *Return: always 0 (success)
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		des[i] = src[i];
	return (dest);
}
