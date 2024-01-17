#include "monty.h"
/**
*mod - computes the rest of div 2nd and top
*@stack: - stack element
*Return: - returns nothing
*/
void mod(stack_t **stack)
{
	int result;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "can't mod, stack too short\n");
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n == 0)
	{
		fprintf(stderr, "division by zero\n");
		exit(EXIT_FAILURE);
	}
	result = (*stack)->next->n % (*stack)->n;
	(*stack)->next->n = result;
	pop(stack);
}
