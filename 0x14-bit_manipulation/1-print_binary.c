#include <stdio.h>
#include <unistd.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: number to be represented
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		printf("0");
		return;
	}
	if (n == 1)
	{
		printf("1");
		return;
	}
	print_binary(n >> 1);
	if (n & 1)
		printf("1");
	else
		printf("0");
}
