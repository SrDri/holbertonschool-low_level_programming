#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - struct dog
 * @d: pointer to variable
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (!d->name)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	printf("Age: %f\n", d->age);

	if (!d->owner)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
