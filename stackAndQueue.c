#include "monty.h"
/**
*_stack - implements stack in LIFO
*@stack: - stack element
*@line_number: - int type param
*Return: - returns nothing
*/
void _stack(stack_t **stack, unsigned int line_number)
{
	(void)line_number;
	(void)*stack;
}
/**
*queue - implements queue in FIFO
*@stack: - stack element
*@line_number: -int type param
*Return: - returns nothing
*/
void queue(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;
	stack_t *temp = NULL;
	(void)line_number;

	if (current == NULL)
		return;
	while (current->next != NULL)
	{
		temp = current->next;
		current->next = temp->next;
		if (temp->next != NULL)
			temp->next->prev = current;
		temp->next = *stack;
		temp->prev = NULL;
		(*stack)->prev = temp;
		*stack = temp;
	}
}
