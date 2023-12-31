#ifndef HEAD_
#define HEAD_
/**
 * struct listint_s - declaring variables
 * @n: integer
 * @prev: previous
 * @next: next
 */
typedef struct listint_s
{
	int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void bubble_sort(int *array, size_t size);

void swap(int *a, int *b);

void print_array(int *array, size_t size);

void quick_sort(int *array, size_t size);

void selection_sort(int *array, size_t size);

void insertion_sort_list(listint_t **list);

void swap_node(listint_t **list, listint_t *n1, listint_t *n2);

void print_list(const listint_t *list);

#endif
