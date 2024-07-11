#include "main.h"
#include "dog.h"

/**
 * print_dog - print dog information
 * @d: dog structure
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{}
	else if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else if (d->age == 0)
	{
		printf("Age: (nil)\n");
	}
	else if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
