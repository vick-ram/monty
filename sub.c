#include "monty.h"
/**
*sub - subtracts the top elements of stack
*@stack: - stacl element
*Return: - returns nothing
*/
void sub(stack_t **stack)
{
	int result;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "can't sub, stack too short\n");
		exit(EXIT_FAILURE);
	}
	result = (*stack)->next->n - (*stack)->n;
	(*stack)->next->n = result;
	pop(stack);
}
