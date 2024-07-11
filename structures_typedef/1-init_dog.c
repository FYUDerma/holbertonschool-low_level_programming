#include "main.h"
#include "dog.h"

/**
 * init_dog - Initialize a variable of type struct dog
 * @d: structure
 * @name: Name of the Dog
 * @age: Age of the Dog
 * @owner: Owner of the Dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
