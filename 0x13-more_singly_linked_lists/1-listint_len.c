#include "lists.h"

/**
 * listint_len - function that returns the number of elements
 * in a linked listint_t list
 * @h: pointer to list
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *p;
	size_t count;

	p = h;
	count = 0;
	while (p != NULL)
	{
		p = p->next;
		count++;
	}
	return (count);
}
