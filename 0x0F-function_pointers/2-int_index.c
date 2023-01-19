#include "function_pointers.h"

/**
 * int_index - Search for an integer
 * @array:int
 * @size:int
 * @cmp:pointer to the function
 *
 * Return: an integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, j;

	if (size <= 0)
	{
		return (-1);
	}
	if (size && cmp != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			j = cmp(array[i]);
			if (j != 0)
				return (i);
		}
	}
	return (-1);
}
