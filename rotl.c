#include "monty.h"
/**
*rotl - rotates the stack to the top
*@stack: - stack element
*@line_number:
*Return: - returns nothing
*/
void rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *last;
	(void)line_number;

	if (*stack != NULL && (*stack)->next != NULL)
	{
		last = *stack;
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = *stack;
		*stack = (*stack)->next;
		last->next->next = NULL;
	}
}
