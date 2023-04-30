#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - function that adds a new node at the beginning
 * @head: The orignal linked list
 * @str: The string to add to the node
 * Return: NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int length = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = strdup(str);
	while (str[length] != '\0')
	{
		length++;
	}
	new_node->len = length;
	if (*head != NULL)
		new_node->next = *head;
	if (*head == NULL)
		new_node->next = NULL;

	*head = new_node;

	return (*head);
}
