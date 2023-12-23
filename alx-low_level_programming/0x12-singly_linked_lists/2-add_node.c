#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: head
 * @str: str
 * Return: address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;

	
	newnode = malloc(sizeof(list_t));
	newnode->str = strdup(str);
	newnode->len = strlen(str);
	if (*head == NULL || head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	newnode->next = *head;
	*head = newnode;
	return newnode;
}
