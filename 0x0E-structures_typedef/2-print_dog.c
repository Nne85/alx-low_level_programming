#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * @d:pointer to struct
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if ((*d).name == NULL)
	{
		printf("Name: (nil)\n");
	}
	if ((*d).owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	if (d->age == 0)
	{
		printf("Age: 0\n");
	}
	else
		printf("Name: %s\n", d->name);
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
