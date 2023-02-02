#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * @n:integer
 * @m:integer
 * Return:number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int count = 0;

	while (xor)
	{
		count += xor & 1;
		xor >>= 1;
	}

	return (count);
}
