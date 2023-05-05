#include "main.h"
#include <stdio.h>

/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int num_b;
	char *address;

	num_b = 2;
	address = (char *)&num_b;
	if (*address)
		return (1);

	return (0);
}
