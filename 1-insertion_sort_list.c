#include "sort.h"
#include <stdio.h>
/**
 * insertion_sort_list - function that sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm
 * @list: Doubly linked List to sort
 * Return: Nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *cur = *list;
	listint_t *hprev = NULL;
	listint_t *prev = NULL;

	if (*list == NULL)
		return;
	cur = cur->next;
	while (cur != NULL)
	{
		hprev = cur->prev;
		while (hprev != NULL && hprev->n > cur->n)
		{
			prev = hprev->prev;
			hprev->next = cur->next;
			hprev->prev = cur;
			if (cur->next != NULL)
				cur->next->prev = hprev;
			cur->next = hprev;
			cur->prev = prev;
			if (prev != NULL)
				prev->next = cur;
			else
				*list = cur;
			hprev = cur->prev;
			print_list(*list);
		}
		cur = cur->next;
	}
}
