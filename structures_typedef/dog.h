#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog structure
 * @name: Name of the Dog
 * @age: Age of the Dog
 * @owner: Ower of the Dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * struct dog_t - dog structure
 * @name: Name of the Dog
 * @age: Age of the Dog
 * @owner: Ower of the Dog
 */
struct dog_t
{
	char *name;
	float age;
	char *owner;
};

/* Project Prototype */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
