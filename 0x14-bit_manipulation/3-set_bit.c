#include "main.h"
#include <stdio.h>

/**
 * set_bit - sets value of bit to 1 at a given index value
 * @n: Pointer to a number
 * @index: replacement in the number index value
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int set;

	if (index > sizeof(unsigned int) * 16)
		return (-1);

	set = 1;
	*n = ((*n) | set << index);
	return (1);
}
