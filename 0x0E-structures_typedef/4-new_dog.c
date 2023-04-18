#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - initialization of the function
 * @name: second parameter
 * @age: thrirs parameter
 * @owner: fourth parameter
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *maxd;
	int nl = 0, ol = 0;

	if (name != NULL && owner != NULL)
	{
		nl = lenth_of_string(name) + 1;
		ol = lenth_of_string(owner) + 1;
		maxd = malloc(sizeof(dog_t));
		if (maxd == NULL)
		{
			return (NULL);
		}
		maxd->name = malloc(sizeof(char) * nl);
		if (maxd->name == NULL)
		{
			free(maxd);
			return (NULL);
		}
		maxd->owner = malloc(sizeof(char) * ol);
		if (maxd->owner == NULL)
		{
			free(maxd->name);
			free(maxd);
			return(NULL);
		}
		maxd->name = copy_string(maxd->name, name);
		maxd->owner = copy_string(maxd->owner, owner);
		maxd->age = age;
	}
	return (maxd);
}
/**
 * lenth_of_string - return length of string
 * @s: first parameter
 */
int lenth_of_string(char *s)
{
	int i = 0;

	for (; *s != '\0'; s++)
	{
		i++;
	}
	return (i);
}
/**
 * copy_string - copy a string of one variable to the other
 * @d: first parameter
 * @s: second parameter
 */
char *copy_string(char *d, char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		d[i] = s[i];
	}
	d[i++] = '\0';
	return (d);
}
