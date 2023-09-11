#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Set the properties of a struct dog
 * @d: Pointer to struct dog to initialized
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
