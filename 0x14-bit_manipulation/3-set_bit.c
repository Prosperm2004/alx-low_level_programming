#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: Pointer to a number;
 * @index: index to replace in the number
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int set;

	if (index > sizeof(unsigned int) * 16)
		return (-1);
	set = 1;
	/*set = set << index;*/
	*n = ((*n) | set << index);
	return (1);
}
