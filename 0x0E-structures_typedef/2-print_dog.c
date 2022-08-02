#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print dog
 * @d: pointer to struct dog
 * *Return: nothing
*/

void print_dog(struct do *d)
{
	if (d != NULL)
	{
		printf("Name; ");
		d->name == NULL ? printf("(nil)\n") : printf("%s\n", d->name);
		printf("Age: %f\n", d->);
		printf("owner: ");
		d->owner == NULL ? printf("(nil)\n") : printf("%s\n", d->owner);
	}
}
