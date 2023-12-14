#include "monty.h"
/**
 * pop_y - prints the top
 * @head: stack head
 * @element: line_number
 *
 */
void pop_y(stack_t **head, unsigned int element)
{
	stack_t *temp;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", element);
		fclose(lifo.file);
		free(lifo.content);
		free_2D(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	*head = temp->next;
	free(temp);
}
