#include "lists.h"

/**
 * free_listint - function that frees a listint_t list
 * @head: head of a linked list
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	if (head == NULL)
		return;
	while (head->next != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
	free(head);
}
