#include "monty.h"
/**
*parseInstructions - parses instructions and opcodes
*@line: - to be printed
*@stack: - stack type param
*@line_number: - the int type param
*Return: - returns nothing
*/
void parseInstructions(char *line, stack_t **stack, unsigned int line_number)
{
	char *opcode = strtok(line, " \t\n");
	int value = atoi(strtok(NULL, " \n\t"));

	if (opcode == NULL || strncmp(opcode, "#", 1) == 0)
		return;
	if (strcmp(opcode, "push") == 0)
		push(stack, value);
	else if (strcmp(opcode, "pall") == 0)
		pall(stack);
	else if (strcmp(opcode, "pint") == 0)
		pint(stack, line_number);
	else if (strcmp(opcode, "pop") == 0)
		pop(stack);
	else if (strcmp(opcode, "swap") == 0)
		swap(stack);
	else if (strcmp(opcode, "add") == 0)
		add(stack);
	else if (strcmp(opcode, "nop") == 0)
		nop(stack);
	else if (strcmp(opcode, "sub") == 0)
		sub(stack);
	else if (strcmp(opcode, "div") == 0)
		divide(stack);
	else if (strcmp(opcode, "mul") == 0)
		mul(stack);
	else if (strcmp(opcode, "mod") == 0)
		mod(stack);
	else if (strcmp(opcode, "pchar") == 0)
		pchar(stack);
	else if (strcmp(opcode, "pstr") == 0)
		pstr(stack);
	else if (strcmp(opcode, "rotl") == 0)
		rotl(stack);
	else if (strcmp(opcode, "rotr") == 0)
		rotr(stack);
	else if (strcmp(opcode, "stack") == 0)
		_stack(stack, line_number);
	else if (strcmp(opcode, "queue") == 0)
		queue(stack, line_number);
}
