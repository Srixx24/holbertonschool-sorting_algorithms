#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
 * swap_node - swap function
 * @list: list
 * @n1: first node
 * @n2: second node
 */
void swap_node(listint_t **list, listint_t *n1, listint_t *n2)
{
	if (n1->prev)
		n1->prev->next = n2;
	if (n2->next)
		n2->next->prev = n1;

	n1->next = n2->next;
	n2->prev = n1->prev;
	n1->prev = n2;
	n2->next = n1;

	if (n2->prev == NULL)
		*list = n2;

	print_list(*list);
}
/**
 * insertion_sort_list -  Insertion sort algorithm
 * @list: list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp, *x, *prev;

	if (*list == NULL || (*list)->next == NULL)
		return;

	temp = (*list)->next;
	while (temp)
	{
		prev = temp->prev;
		x = temp;

		while (prev && prev->n > x->n)
		{
			swap_node(list, prev, x);
			prev = x->prev;
		}
		temp = temp->next;
	}
}
