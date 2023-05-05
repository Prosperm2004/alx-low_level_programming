#include "main.h"
#include <stdio.h>

/**
 * get_bit - returns a value at a given index
 * @n: value of number to check
 * @index: index number to check
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int keep;

	if (index > 64)
	{
		return (-1);
	}

	keep = n >> index;
	return (keep & 1);
}
