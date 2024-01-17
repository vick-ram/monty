#include "monty.h"
/**
*pstr - prints the string starting at the top
*@stack: - stack elemeet
*Return: - returns nothing
*/
void pstr(stack_t **stack)
{
	stack_t *curr = *stack;

	while (curr != NULL && curr->n != 0)
	{
		if (curr->n < 0 || curr->n > 127)
		{
			fprintf(stderr, "can't pstr, value out of range\n");
			exit(EXIT_FAILURE);
		}
		printf("%c", curr->n);
		curr = curr->next;
	}
	printf("\n");
}
