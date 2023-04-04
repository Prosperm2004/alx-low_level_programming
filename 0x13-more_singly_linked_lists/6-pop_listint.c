#include "lists.h"

/**
 * pop_listint - function that deletes the head node
 * @head: double pointer to list
 * Return: head node’s data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (*head == NULL)
		return (0);

	temp = *head;
	num = (*head)->n;
	*head = (*head)->next;
	free(temp);

	return (num);
}
