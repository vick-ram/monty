#include "monty.h"
/**
*rotr - rotates the stack to the bottom
*@stack: - stack element
*Return: - returns nothing
*/
void rotr(stack_t **stack)
{
	stack_t *last = *stack, *second_last = NULL;

	if (*stack != NULL && (*stack)->next != NULL)
	{
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
