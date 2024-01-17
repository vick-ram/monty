#include "monty.h"
/**
*rotl - rotates the stack to the top
*@stack: - stack element
*Return: - returns nothing
*/
void rotl(stack_t **stack)
{
	stack_t *last;

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
