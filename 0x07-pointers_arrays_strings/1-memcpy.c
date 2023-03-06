#include "main.h"

/**
 * _memcpy - copy memory area
 * @dest: char array to copy into
 * @src: char array to copy from
 * @n: number of elements to copy
 * Return: pointer to `dest`
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j;

	j = 0;
	while (n > 0)
	{
		dest[j] = src[j];
		j++;
		n--;
	}
	return (dest);
}
