#include "monty.h"
/**
*pall - prints all elements of the stack
*@stack: pointer to stack
*@line_number:
*Return: - returns nothing
*/
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *curr;
	(void)line_number;

	curr = *stack;
	while (curr != NULL)
	{
		printf("%d\n", curr->n);
		curr = curr->next;
	}
}
