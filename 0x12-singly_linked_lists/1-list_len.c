#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - function that returns the number of elements
 * in a linked list_t list
 * @h: head of a linked list
 * Return: number of elements in a linked
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
