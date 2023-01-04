#include "main.h"

/**
 * sqr_root - returns square root
 * @i:int
 * @j:int
 *
 * Return: int
 */
int sqr_root(int i, int j)
{
	if (i * i == j)
		return (i);
	if (i * i > j)
		return (-1);
	return (sqr_root(i + 1, j));
}

/**
 * _sqrt_recursion - natural square root of a number
 * @n:integer to find the square root of
 *
 * Description: returns the natural square root of a number
 *
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (sqr_root(1, n));
}
