#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * add_node_end - function that adds a new node
 * at the end of a list_t list
 * @head: double pointer to head
 * @str: string to duplicate into new node
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current;
	list_t *new_node;
	int c;

	current = *head;
	while (current && current->next != NULL)
		current = current->next;

	for (c = 0; str[c] != '\0'; c++)
		;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = strdup(str);
	if (new_node->str  == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = c;
	new_node->next = NULL;

	if (current)
		current->next = new_node;
	else
		*head = new_node;

	return (new_node);
}