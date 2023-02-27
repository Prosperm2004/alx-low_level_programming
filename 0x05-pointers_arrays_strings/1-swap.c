#include "main.h"
/**
 * swap_int - function that swaps the values of two integers
 * @a: int type pointer
 * @b: int type pointer
 * Return: nothing.
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
