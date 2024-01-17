#include "monty.h"
/**
*swap - swaps elements in stack
*@stack: - stack element
*@line_number: int type param
*Return: - returns nothing
*/
void swap(stack_t **stack)
{
	int temp = (*stack)->n;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n");
		exit(EXIT_FAILURE);
	}
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = temp;
}
