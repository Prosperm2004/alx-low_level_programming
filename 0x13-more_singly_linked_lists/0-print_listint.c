#include "lists.h"
#include <stdio.h>

/**
 * print_listint - function that prints all the elements
 * of a listint_t list
 * @h: pointer to list
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *p;
	size_t count;

	for (p = h, count = 0; p != NULL; count++, p = p->next)
	{
		printf("%d\n", p->n);
	}
	return (count);
}
