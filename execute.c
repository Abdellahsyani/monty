#include "monty.h"
/**
 * execute - executes all the opcode
 * @stack: head linked list - stack
 * @count: the counter
 * @file: poiner to open file
 * @content: khat
 *
 * Return: 0 if seccess
 */
int execute(char *content, stack_t **stack, unsigned int count, FILE *file)
{
	instruction_t opst[] = {
		{"push", push_y}, {"pall", pall_y},
		{"pint", pint_y},
		{"pop", pop_y},
		{"swap", swap_y},
		{NULL, NULL}
	};
	unsigned int i = 0;
	char *object;

	object = strtok(content, " \n\t");
	if (object && object[0] == '#')
		return (0);
	lifo.vector = strtok(NULL, " \n\t");
	for (i = 0; opst[i].opcode && object; i++)
	{
		if (strcmp(object, opst[i].opcode) == 0)
		{	opst[i].f(stack, count);
			return (0);
		}
	}
	if (object && opst[i].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", count, object);
		fclose(file);
		free(content);
		free_2D(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
