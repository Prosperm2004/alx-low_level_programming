#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_name - function that prints a name
 * @name: pointer that prints to char
 * @f: pointer to function that prints nothing, but prints a name
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		f(name);
	}
}
