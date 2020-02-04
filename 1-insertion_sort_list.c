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
	listint_t *cur;
	listint_t *tmp;

	cur = *list;
	cur = cur->next;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	while (cur != NULL)
	{
		while (cur->prev != NULL && cur->n < cur->prev->n)
		{
			tmp = cur;

			if (cur->next != NULL)
				cur->next->prev = tmp->prev;
			cur->prev->next = tmp->next;
			cur = cur->prev;
			tmp->prev = cur->prev;
			tmp->next = cur;
			if (cur->prev != NULL)
				cur->prev->next = tmp;
			cur->prev = tmp;

			if (tmp->prev == NULL)
				*list = tmp;

			print_list(*list);
			cur = cur->prev;
		}
		cur = cur->next;
	}
}
