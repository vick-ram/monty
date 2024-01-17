#ifndef MONTY_H
#define MONTY_H

#define _POSIX_C_SOURCE 200809L
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <stdio.h>
#include <unistd.h>
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

void push(stack_t **stack, int);
void pall(stack_t **stack);
void pint(stack_t **stack, unsigned int line_number);
void parseInstructions(char *, stack_t **, unsigned int);
void pop(stack_t **);
void swap(stack_t **);
void add(stack_t **);
void nop(stack_t **);
void sub(stack_t **);
void divide(stack_t **);
void mul(stack_t **);
void mod(stack_t **);
void pchar(stack_t **);
void pstr(stack_t **);
void rotl(stack_t **);
void rotr(stack_t **);

#endif /*MONTY_H*/
