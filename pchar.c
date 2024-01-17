#include "monty.h"
/**
*pchar - prints character at the topof stack
*@stack: - stack element
*Return: returns nothing
*/
void pchar(stack_t **stack)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "can't pchar, stack empty\n");
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n < 0 || (*stack)->n > 127)
	{
		fprintf(stderr, "can't pchar, value out of range\n");
		 exit(EXIT_FAILURE);
	}
	printf("%c\n", (*stack)->n);
}
