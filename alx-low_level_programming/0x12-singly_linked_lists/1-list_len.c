#include "lists.h"

size_t list_len(const list_t *h)
{
	const list_t *node;
	size_t count;

	node = h;
	count = 0;
	while (node)
	{
		count++;
		node = node->next;
	}
	return (count);
}
