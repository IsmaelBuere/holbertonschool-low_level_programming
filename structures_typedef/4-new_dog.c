#include "dog.h"
#include <stdlib.h>
/**
 *
 *
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int nl, ol, i;
	dog_t *d1;

	d1 = (dog_t *)malloc(sizeof(dog_t));
	if (d1 == NULL)
		return ('\0');
	nl = ol = 0;
	while (name[nl++])
		;
	while (owner[ol++])
		;
	d1->name = malloc(nl * sizeof(d1->name));
	if (d1->name == NULL)
	{
		free(d1);
		return ('\0');
	}
	for (i = 0; i <= nl; i++)
		d1->name[i] = name[i];
	d1->age = age;
	d1->owner = malloc(ol * sizeof(d1->owner));
	if (d1->owner == NULL)
	{
		free(d1->name);
		free(d1);
		return ('\0');
	}
	for (i = 0; i<= ol, i++)
		d1->owner[i] = owner[i];
	return (d1);
}
