#include "monty.h"
/**
*push - adds an element to a stack
*@stack: - element of a stack
*@line_number: - int type param
*Return: - returns nothing
*/
void push(stack_t **stack, unsigned int line_number)
{
	char *arg = strtok(NULL, " \n");
	int value;
	stack_t *new_node;

	if (arg == NULL || !is_numeric(arg))
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	value = atoi(arg);
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "L%d: Error: malloc failed\n", line_number);
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
}
/**
*is_numeric - checks if numeric
*@arg: - char argument
*Return: - returns 0 failure and 1 success
*/
int is_numeric(const char *arg)
{
	while (*arg)
	{
		if (!isdigit(*arg))
			return (0);
		arg++;
	}
	return (1);
}
