#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
/**
 * struct stack_in - variables -args, file, line content
 * @argv: the value to list
 * @file: pointer to monty file
 * @content: line content
 * @var: the value to change stack <-> queue
 * Description: carries values through the program
 */
typedef struct stack_in
{
	char *argv;
	FILE *file;
	char *content;
	int var;
} stack_at;

extern stack_at Op;

/**the function of all my file */
int main(int argc, char *argv[]);
int execute(char *content, stack_t **stack, unsigned int counter, FILE *file);
void pall_y(stack_t **head, unsigned int element);
void push_y(stack_t **head, unsigned int element);
void new_node(stack_t **head, int i);
void new_queue(stack_t **head, int i);
void pint_y(stack_t **head, unsigned int  element);
void free_2D(stack_t *head);
#endif
