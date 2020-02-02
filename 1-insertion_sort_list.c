#include "sort.h"
/**
 *insertion_sort_list - insert sort algorithm with a doble linked list
 *@list: head of a list
 *Return: void
 */
void insertion_sort_list(listint_t **list)
{       listint_t *temp, *prev, *pos;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return; /*verify null list or one node list*/

	temp = *list;
	while (temp != NULL)
	{
		pos = temp;
		prev = pos->prev;
		/* while node data/int is greater than next*/
		while (prev != NULL && prev->n > pos->n)
		{
			if (swapNode(&prev, &pos, list))
				continue;
			prev = pos->prev; /*to compare with previus*/
		}
		temp = temp->next; /*forward advance list/next node */
	}
}
/**
 *swapNode- swaps nodes of a list by insert sort
 *@prev: pointer to node prev to swap
 *@pos: pointer to node pos to swap
 *@list: list to sort
 *Return: 0 next node, 1 continue to back checking
 */
int swapNode(listint_t **prev, listint_t **pos, listint_t **list)
{
			/* if doesnt the firts or last node*/
			if ((*prev)->prev != NULL && (*pos)->next != NULL)
			{       (*prev)->prev->next = *pos;
				(*pos)->next->prev = *prev;
				(*prev)->next = (*pos)->next;
				(*pos)->prev = (*prev)->prev;
				(*pos)->next = *prev;
				(*prev)->prev = *pos;
				print_list(*list);
				*prev = (*pos)->prev;
				return (1);
			}
			if ((*prev)->prev == NULL)/* firts node*/
			{       (*pos)->prev = NULL;
				(*prev)->next = (*pos)->next;
				(*prev)->prev = *pos;
				if ((*pos)->next != NULL)
					(*pos)->next->prev = *prev;
				(*pos)->next = *prev;
				*list = *pos; /* change head*/
				print_list(*list);
				*prev = (*pos)->prev;
				return (1);
			}
			if ((*pos)->next == NULL)/*last node*/
			{       (*pos)->prev = (*prev)->prev;
				(*pos)->next = *prev;
				(*prev)->next = NULL;
				(*prev)->prev->next = *pos;
				(*prev)->prev = *pos;
				print_list(*list);
				*prev = (*pos)->prev;
				return (1);
			}
return (0);
}
