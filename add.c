#include "monty.h"
/**
*add - adds the top two stack elements
*@stack: - elements param
*Return: - returns nothing
*/
void add(stack_t **stack)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "can't add, stack too short\n");
		exit(EXIT_FAILURE);
	}
	(*stack)->next->n += (*stack)->n;
	pop(stack);
}
