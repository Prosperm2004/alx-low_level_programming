#include "main.h"

/**
 * flip_bits - bits needed to flip
 * @n: first num comparance
 * @m: second num comparance
 * Return: number of bits you would need to flip to get
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count;
	unsigned long int res;

	res = n ^ m;
	for (count = 0; res > 0;)
	{
		if ((res & 1) == 1)
			count++;
		res = res >> 1;
	}

	return (count);
}
