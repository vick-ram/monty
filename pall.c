#include "monty.h"
/**
*pall - prints all elements of the stack
*@stack: pointer to stack
*@line_number: - int param
*Return: - returns nothing
*/
void pall(stack_t **stack)
{
	stack_t *curr = *stack;

	while (curr != NULL)
	{
		printf("%d\n", curr->n);
		curr = curr->next;
	}
}
