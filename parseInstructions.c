#include "monty.h"
/**
*parseInstructions - parses instructions and opcodes
*@line: -
*@stack: - stack type param
*@line_number: -
*Return: - returns nothing
*/
void parseInstructions(char *line, stack_t **stack, unsigned int line_number)
{
	char *opcode;
	int value;

	opcode = strtok(line, " \t\n");
	if (opcode == NULL || strncmp(opcode, "#", 1) == 0)
		return;
	if (strcmp(opcode, "push") == 0)
	{
		value = atoi(strtok(NULL, " \n\t"));
		push(stack, value);
	}
	else if (strcmp(opcode, "pall") == 0)
		pall(stack);
	else if (strcmp(opcode, "pint") == 0)
		pint(stack, line_number);
	else if (strcmp(opcode, "pop") == 0)
		pop(stack);
	else if (strcmp(opcode, "swap") == 0)
		swap(stack);
}
