#include "monty.h"
/**
 * new_node - add node to the head stack
 * @head: head of the stack
 * @data: new_value
 */
void new_node(stack_t **head, int data)
{

	stack_t *new_node, *temp;

	temp = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (temp)
		temp->prev = new_node;
	new_node->n = data;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
}
