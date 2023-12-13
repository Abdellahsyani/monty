#include "monty.h"

/**
 * pint_y - the function to print the top.
 * @head: the head.
 * @element: the elem.
 */

void pint_y(stack_t **head, unsigned int  element)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", element);
		fclose(Op.file);
		free(Op.content);
		free_2D(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
