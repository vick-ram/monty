#include "monty.h"
/**
*pstr - prints the string starting at the top
*@stack: - stack elemeet
*@line_number:
*Return: - returns nothing
*/
void pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *curr = *stack;

	while (curr != NULL && curr->n != 0)
	{
		if (curr->n < 0 || curr->n > 127)
		{
			fprintf(stderr, "L%d: can't pstr, value out of range\n", line_number);
			exit(EXIT_FAILURE);
		}
		printf("%c", curr->n);
		curr = curr->next;
	}
	printf("\n");
}
