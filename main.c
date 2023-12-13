#define _GNU_SOURCE
#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
stack_at Op = {NULL, NULL, NULL, 0};
/**
 * main - entry point.
 * @argc: the value.
 * @argv: the vector
 * Return: 0 if seccess.
 */

int main(int argc, char *argv[])
{
	char *content;
	FILE *file;
	size_t size = 0;
	ssize_t n_char = 1;
	stack_t *stack = NULL;
	unsigned int count = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	Op.file = file;
	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (n_char > 0)
	{
		content = NULL;
		n_char = getline(&content, &size, file);
		Op.content = content;
		content++;
		if (n_char > 0)
		{
			execute(content, &stack, count, file);
		}
		free(content);
	}
	free_2D(stack);
	fclose(file);
return (0);
}
