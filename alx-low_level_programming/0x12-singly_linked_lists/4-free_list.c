#include "lists.h"
#include <stdlib.h>


void free_list(list_t *head)
{
	list_t *mover;

	while (head)
	{
		mover = head;
		head = head->next;
		free(mover->str);
		free(mover);
	}
	free(head);
}
