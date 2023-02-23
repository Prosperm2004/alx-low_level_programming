#include "main.h"
/**
 * print_line - function that draws a straight line in the terminal
 * @n: number of times the character
 * Description - You can only use _putchar function to print
 */

void print_line(int n)
{
	int c;

	c = 0;
	while (c < n)
	{
		_putchar('_');
		c++;
	}
	_putchar('\n');
}
