#include "main.h"
#include <string.h>

/**
 * _strspn - search a string for a set of bytes
 * @s: char string array
 * @accept: char array to check bytes with
 * Return: Number of bytes in the intial segment of `s`
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;

	/* return 0 if anyone is NULL */
	if ((s == NULL) || (accept == NULL))
		return (len);
	while (*s && strchr(accept, *s++))
	{
		len++;
	}
	return (len);
}
