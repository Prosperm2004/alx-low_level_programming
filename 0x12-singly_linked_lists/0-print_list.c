#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * print_list - function that prints all the elements of a list_t list
 * @h: head of linked list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", h->len, "(nill)");
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		count++;
	}
	return (count);
}
