#define _GNU_SOURCE
#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
stack_at lifo = {NULL, NULL, NULL, 0};
/**
 * main - monty code interpreter and entry point
 * @argc: number of arguments
 * @argv: the vector
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	char *content;
	FILE *file;
	size_t size = 0;
	ssize_t read = 1;
	stack_t *stack = NULL;
	unsigned int count = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	lifo.file = file;
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (read > 0)
	{
		content = NULL;
		read = getline(&content, &size, file);
		lifo.content = content;
		count++;
		if (read > 0)
		{
			execute(content, &stack, count, file);
		}
		free(content);
	}
	free_2D(stack);
	fclose(file);
	return (0);
}
