#include "monty.h"
/**
*pop - pops an element from a stack
*@stack: stack type param
*@line_number: number
*Return - returns nothing
*/
void pop(stack_t **stack)
{
	stack_t *temp = *stack;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n");
		exit(EXIT_FAILURE);
	}
	*stack = (*stack)->next;
	if (*stack != NULL)
		(*stack)->prev = NULL;
	free(temp);
}
