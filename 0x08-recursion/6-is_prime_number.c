#include "main.h"

/**
 * check_prime - checks to see if number is prime
 * @i:int
 * @j:int
 *
 * Return:an int
 */
int check_prime(int i, int j)
{
	if (j < 2 || j % i == 0)
		return (0);
	else if (i > j / 2)
		return (1);
	else
		return (check_prime(i + 1, j));
}

/**
 * is_prime_number - states if number is prime
 * @n:int
 *
 * Description: returns 1 if the input integer is a prime number
 *
 * Return: int
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (check_prime(2, n));
}
