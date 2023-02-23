#include "main.h"
/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14
 * Description - You can only use _putchar three times in your code
 * Return: always 0
 */

void more_numbers(void)
{
	int i, j;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 15)
		{
			if (j > 9)
			{
				_putchar(j / 10 + '0');
				_putchar(j % 10 + '0');
				j++;
			}
		}
		i++;
		_putchar('\n');
	}
}

