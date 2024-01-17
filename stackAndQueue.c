#include "monty.h"
/**
*_stack - sets the normal format to LIFO
*@stack: - stack element
*@line_number: - int type param
*Return: - returns nothing
*/
void _stack(stack_t **stack, unsigned int line_number)
{
	(void)*stack;
	(void)line_number;
}

/**
*queue - sets the format of data to FIFO
*@stack: - stack elent
*@line_number: - int type param
*Return: - returns nothing
*/
void queue(stack_t **stack, unsigned int line_number)
{
	stack_t *curr = *stack;
	stack_t *prev = NULL, *temp = NULL;

	(void)line_number;
	while (curr != NULL && curr->next != NULL)
	{
		temp = curr->next;
		curr->next = prev;
		prev = curr;
		curr = temp;
	}
	*stack = prev;
}
