#include "monty.h"
/**
 * pint_y - prints the top
 * @head: stack head
 * @element: line_number
 *
 */
void pint_y(stack_t **head, unsigned int element)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", element);
		fclose(lifo.file);
		free(lifo.content);
		free_2D(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
