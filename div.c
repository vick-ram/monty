#include "monty.h"
/**
*divide - divides the second top element by the top element
*@stack: - stack element
*Return: - returns nothing
*/
void divide(stack_t **stack)
{
	int result;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "can't div, stack too short\n");
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n == 0)
	{
		fprintf(stderr, "division by zero\n");
		exit(EXIT_FAILURE);
	}
	result = (*stack)->next->n / (*stack)->n;
	(*stack)->next->n = result;
	pop(stack);
}
