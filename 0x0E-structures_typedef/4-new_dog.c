#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - a function that gets a length of string
 * @str: the string to get the length
 * Return: length of @str
*/

int _strlen(const char *str)
{
	int length = 0;

	while (*str++)

	return (length);
}

/**
 * _strcopy - function that return @dest with a copy of a strin from @src
 * @src: string to here
 * @dest: copy string to here
 * Return: @dest
*/

char *_strcopy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);

/**
*new_dog - a function that creates a new dog
*@name: name of dog
*@age: age of dog
*@owner: dog owner
*Return: struct pointer dog NULL if function fail
*/

dog_t *new_dog(char *name, float age char *owner)
{
	dog_t *dog;

