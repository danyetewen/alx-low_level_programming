#include "main.h"

/**
 * _strchr - a function that locates a character in a string
 * @s: pointer to our array input
 * @c: character to locate from input array
 * Return: first occurence of character or null if not found
*/

char *_strchr(char *s, char c)
{
	if (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	/**
	 * if c is '\0', you should return
	 * the pointer to the '\0' of the
	 * string s
	*/
	if (*s == c)
		return (s);
	/*return null if not found*/
	return ('\0');
}
