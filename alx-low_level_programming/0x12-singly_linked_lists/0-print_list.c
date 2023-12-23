#include "lists.h"
#include <stdio.h>


/**
 * print_list - prints all the elements of a list_t
 * @h: h
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *nodes;
	int count;

	count = 0;
	nodes = h;
	while (nodes)
	{
		count++;
		if (nodes->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", nodes->len, nodes->str);
		nodes = nodes->next;
	}
	return (count);
}
