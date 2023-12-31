#include "monty.h"
/**
 * swap_y - adds the top two elements of the stack.
 * @head: stack head
 * @element: line_number
 */
void swap_y(stack_t **head, unsigned int element)
{
	stack_t *temp;
	int len = 0, cut;

	temp = *head;
	while (temp)
	{
		temp = temp->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", element);
		fclose(lifo.file);
		free(lifo.content);
		free_2D(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	cut = temp->n;
	temp->n = temp->next->n;
	temp->next->n = cut;
}
