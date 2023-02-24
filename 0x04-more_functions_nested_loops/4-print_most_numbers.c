#include "main.h"

/**
 * print_most_numbers - function that prints the numbers, from 0 to 9
 * Description - You can only use _putchar twice in your code
 * Return: always 0
 */

void print_most_numbers(void)
{
	int a;

	a = 0;
	while (a < 10)
	{
		if (a != 2 && a != 4)
		{
			_putchar(a + '0');
		}
		a++;
	}
	_putchar('\n');
}
