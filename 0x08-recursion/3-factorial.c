#include "main.h"

/**
 * factorial - returns factorial of a given number
 * @n:int
 *
 * Description: returns the factorial of a given number
 * Return: int
 */
int factorial(int n)
{
	int i;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		i = n * factorial(n - 1);
	}
	return (i);
}
