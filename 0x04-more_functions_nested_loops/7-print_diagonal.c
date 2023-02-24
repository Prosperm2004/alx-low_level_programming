#include "main.h"
/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: number of times the character
 * Description - You can only use _putchar function to print
 */

void print_diagonal(int n)
{
	int c;

	c = 0;
	while (c < n)
	{
		_putchar('\\');
		_putchar('\n');
		c++;
	}
	_putchar('\n');
}
