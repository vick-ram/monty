#include "monty.h"
/**
*mul - multiplies the 2nd top with the top
*@stack: - stack element
*Return: - returns nothing
*/
void mul(stack_t **stack)
{
	int result;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "can't mul, stack too short\n");
		exit(EXIT_FAILURE);
	}
	result = (*stack)->next->n * (*stack)->n;
	(*stack)->next->n = result;
	pop(stack);
}
