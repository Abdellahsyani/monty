#include "monty.h"

/**
 * free_2D - the function to free demonsial array.
 * @head: the head of the list.
 */

void free_2D(stack_t *head)
{
	stack_t *temp;

	temp = head;
	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
