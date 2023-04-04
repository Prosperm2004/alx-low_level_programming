#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node
 * at the end of a listint_t list
 * @head: double pointer to list
 * @n: number to add to new node
 * Return: address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr;
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = NULL;

	ptr = *head;
	if (*head == NULL)
	{
		*head = temp;
		return (*head);
	}

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = temp;

	return (*head);
}
