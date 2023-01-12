#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min:int
 * @max:int
 *
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *p;
	int i, j = 0;

	if (min > max)
		return (NULL);
	p = malloc((max - min + 1) * sizeof(int));
	if (p == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		p[j] = i;
		j++;
	}
	return (p);
}
