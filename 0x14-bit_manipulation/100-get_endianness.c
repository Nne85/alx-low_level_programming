#include "main.h"
#include <limits.h>
#include <stdint.h>

/**
 * get_endinanness -  checks the endianness.
 * Return:0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	uint32_t n = 1;
	return (*(char *) &n == 1);
}
