#include "monty.h"
/**
*rotr - rotates the stack to the bottom
*@stack: - stack element
*@line_number:
*Return: - returns nothing
*/
void rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *last, *second_last = NULL;
	(void)line_number;

	if (*stack != NULL && (*stack)->next != NULL)
	{
		last = *stack;
		while (last->next != NULL)
		{
			second_last = last;
			last = last->next;
		}
		second_last->next = NULL;
		last->next = *stack;
		*stack = last;
	}
}
