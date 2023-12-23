#include "lists.h"
#include <stdlib.h>
#include <string.h>


/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: head
 * @str: str
 * Return: node address
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode;
	list_t *mover;

	newnode = malloc(sizeof(list_t));
	newnode->str = strdup(str);
	newnode->len = strlen(str);
	newnode->next = NULL;
	mover = *head;
	if (*head == NULL || head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	while (mover->next)
	{
		mover = mover->next;
	}
	mover->next = newnode;
	newnode->next = NULL;
	return (newnode);
}
