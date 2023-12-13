#include "monty.h"

/**
 * push_y - the function to push the data.
 * @head: the head of the list.
 * @element: the value of data.
 */

void push_y(stack_t **head, unsigned int element)
{
	int i, j = 0, car = 0;

	if (Op.argv)
	{
		if (Op.argv[0] == '-')
			j++;
		for (; Op.argv[j] != '\0'; j++)
		{
			if (Op.argv[j] > 57 || Op.argv[j] < 48)
				car = 1;
		}
		if (car == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", element);
			fclose(Op.file);
			free(Op.content);
			free_2D(*head);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", element);
		fclose(Op.file);
		free(Op.content);
		free_2D(*head);
		exit(EXIT_FAILURE);
	}
	i = atoi(Op.argv);
	if (Op.var == 0)
	{
		new_node(head, i);
	}
	else
	{
		new_queue(head, i);
	}
}
