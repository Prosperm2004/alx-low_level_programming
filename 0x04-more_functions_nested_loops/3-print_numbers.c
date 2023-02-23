#include "main.h"

/**
 * print_numbers - function that prints the numbers, from 0 to 9
 * Description - You can only use _putchar twice in your code
 */

void print_numbers(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
