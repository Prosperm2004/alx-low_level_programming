#include "main.h"
#include <stdio.h>
/**
 * get_bit - Returns a value at a given index
 * @n: Number to check the value of
 * @index: The index to look for the number
 * Return: A value at a given index or -1 if an error occours
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int hold;

	if (index > 64)
		return (-1);

	hold = n >> index;

	return (hold & 1);
}
