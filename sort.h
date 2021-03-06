#ifndef SORT
#define SORT
#include <stdio.h>
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
listint_t *create_listint(const int *array, size_t size);
int swapNode(listint_t **prev, listint_t **pos, listint_t **list);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void QS(int *array, int low, int up, size_t size);
int LomutoPart(int *array, int low, int up, size_t size);
void quick_sort(int *array, size_t size);
#endif
