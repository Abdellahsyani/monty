#include "monty.h"
/**
 * push_y - add node to the stack
 * @head: stack head
 * @element: line_number
 */
void push_y(stack_t **head, unsigned int element)
{
	int n, j = 0, flag = 0;

	if (lifo.vector)
	{
		if (lifo.vector[0] == '-')
			j++;
		for (; lifo.vector[j] != '\0'; j++)
		{
			if (lifo.vector[j] > 57 || lifo.vector[j] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", element);
			fclose(lifo.file);
			free(lifo.content);
			free_2D(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", element);
		fclose(lifo.file);
		free(lifo.content);
		free_2D(*head);
		exit(EXIT_FAILURE); }
	n = atoi(lifo.vector);
	if (lifo.var == 0)
		new_node(head, n);
	else
		new_queue(head, n);
}
