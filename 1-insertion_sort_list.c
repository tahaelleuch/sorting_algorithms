#include "sort.h"
/**
 * insertion_sort_list - sorts a doubly linked list of integers in ascending order
 * using the Insertion sort algorithm
 * @list: doubly linked list of integers
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *node, *last, *next;

	if (list == NULL || *list == NULL)
		return;
	last = *list;
	node = (*list)->next;
	while (node != NULL)
	{
		next = node->next;
		while (node->n < last->n && node->prev != NULL)
		{
			last->next = node->next;
			if (node->next != NULL)
				node->next->prev = last;
			node->next = last;
			node->prev = last->prev;
			if (node->prev != NULL)
				node->prev->next = node;
			last->prev = node;
			if (node->prev == NULL)
				*list = node;
			else
				last = last->prev->prev;
			print_list(*list);
		}
		if (next != NULL)
			node = next;
		else
			break;
		last = node->prev;
	}
}
