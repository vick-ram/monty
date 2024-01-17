#include "monty.h"
/**
*push - adds an element to a stack
*@stack: - element of a stack
*@value: - value to push
*@line_number: - int param
*Return: - returns nothing
*/
void push(stack_t **stack, int value)
{
	stack_t *new_node;

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new_node->n = value;
	new_node->prev = NULL;
	if (*stack != NULL)
	{
		new_node->next = *stack;
		(*stack)->prev = new_node;
	}
	else
		new_node->next = NULL;
	*stack = new_node;
}
