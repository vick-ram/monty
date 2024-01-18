#include "monty.h"
/**
*pchar - prints character at the topof stack
*@stack: - stack element
*@line_number:
*Return: returns nothing
*/
void pchar(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n < 0 || (*stack)->n > 127)
	{
		fprintf(stderr, "can't pchar, value out of range\n");
		 exit(EXIT_FAILURE);
	}
	printf("%c\n", (*stack)->n);
}
