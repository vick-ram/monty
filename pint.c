#include "monty.h"
/**
*pint - prints the value at the top of the stack
*@stack: - stack element pointer
*@line_number: - int type param
*Return: - returns nothing
*/
void pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
