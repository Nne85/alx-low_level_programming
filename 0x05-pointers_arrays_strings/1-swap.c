#include "main.h"

/**
 * swap_int - function that swaps the values of two integers.
 * @a: this is the first entry value
 * @b: this is the second entry value
 *
 * Description: Write a function that swaps the values of two integers.
 *
 * Return: a changed value
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
