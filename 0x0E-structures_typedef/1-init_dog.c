#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initialization of the function
 * @d: first parameter
 * @name: second parameter
 * @age: thrirs parameter
 * @owner: fourth parameter
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
