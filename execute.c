#include "monty.h"
/**
 * execute - executes the opcode
 * @stack: head linked list - stack
 * @counter: line_counter
 * @file: poiner to monty file
 * @content: line content
 * Return: no return
 */
int execute(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
	instruction_t opst[] = {
		{"push", push_y}, {"pall", pall_y},
		{NULL, NULL}
	};
	unsigned int i = 0;
	char *var;

	var = strtok(content, " \n\t");
	if (var && var[0] == '#')
		return (0);
	Op.argv = strtok(NULL, " \n\t");
	while (opst[i].opcode && var)
	{
		if (strcmp(var, opst[i].opcode) == 0)
		{	opst[i].f(stack, counter);
			return (0);
		}
		i++;
	}
	if (var && opst[i].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", counter, var);
		fclose(file);
		free(content);
		free_2D(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
