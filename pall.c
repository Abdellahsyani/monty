#include "monty.h"
/**
 * pall_y - prints the stack
 * @head: stack head
 * @element: no used
 *
 */
void pall_y(stack_t **head, unsigned int element)
{
	stack_t *temp;
	(void)element;

	temp = *head;
	if (temp == NULL)
		return;
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
