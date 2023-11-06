#include <stdlib.h>
#include "dog.h"
/**
 *
 *
 *
 *
 */
struct dog 
{ 
	char *name;
	float age;
	char *owner;
}
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}


	printf("Name: %s\n", d->name ? d->name : "(nil)";
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", d->owner ? d-owner : "(nil)";
}
