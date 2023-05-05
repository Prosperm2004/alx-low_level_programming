#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to an unsigned integer
 * @b: char string
 * Return: converted decimal number or 0 if there is an unconverttable char
 */

unsigned int binary_to_uint(const char *b)
{
	/* tl - total, pow - power */
	unsigned int tl, pow;
	int len;

	if (b == NULL)
		return (0);

	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}

	pow = 1;
	tl = 0;
	len--;
	while (len >= 0)
	{
		if (b[len] == '1')
		{
			tl += pow;
		}
		len--;
		pow *= 2;
	}

	return (tl);
}
