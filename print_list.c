#include <stdio.h>
#include "sort.h"
/**
 * print_list - print list
 * @list: list
 */
void print_list(const listint_t *list)
{
	if (list == NULL)
	{
		printf("(nil)\n");
		return;
	}
	while (list->next != NULL)
	{
		printf("%d, ", list->n);
		list = list->next;
	}
	printf("%d\n", list->n);
}
