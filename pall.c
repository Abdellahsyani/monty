#include "monty.h"

/**
 * pall_y - the function to print the data.
 * @head: the head of list to be sorted.
 * @element: the data to be take from the head.
 *
 */

void pall_y(stack_t **head, unsigned int element)
{
	stack_t *temp;
	(void)element;

	temp = *head;
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
