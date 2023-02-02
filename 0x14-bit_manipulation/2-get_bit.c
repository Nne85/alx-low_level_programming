#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @index:range of the number of bits
 * @n:int
 * Return: value of a bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(n) * 8 - 1)
		return (-1);
	return ((n >> index) & 1);
}
