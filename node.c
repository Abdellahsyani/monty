#include "monty.h"

/**
 * new_node - add new node at list.
 * @head: the head of stack.
 * @i: the data.
 *
 */

void new_node(stack_t **head, int i)
{
	stack_t *new_node, *temp;

	temp = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
		exit(0);
	}
	if (temp != NULL)
		temp->prev = new_node;
	new_node->n = i;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
}
