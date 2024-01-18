#include "monty.h"
/**
*main - entry point
*@argc: int type cmd param
*@argv: array of arguments
*Return: - returns success
*/
int main(int argc, char *argv[])
{
	char *line = NULL, *opcode;
	FILE *file;
	size_t len = 0, i;
	ssize_t read;
	stack_t *stack = NULL;
	unsigned int line_number = 0;
	instruction_t inst[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{"sub", sub},
		{"div", divide},
		{"mul", mul},
		{"mod", mod},
		{"pchar", pchar},
		{"pstr", pstr},
		{"rotl", rotl},
		{"rotr", rotr},
		{"stack", _stack},
		{"queue", queue},
		{NULL, NULL}
	};

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		return (EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		return (EXIT_FAILURE);
	}
	while ((read = getline(&line, &len, file)) != -1)
	{
		line_number++;
		opcode = strtok(line, " \n");
		if (opcode != NULL)
		{
			for (i = 0; i < sizeof(inst) / sizeof(inst[0]); i++)
			{
				if (strcmp(opcode, inst[i].opcode) == 0)
				{
					inst[i].f(&stack, line_number);
					break;
				}
			}
		}
	}
	free(line);
	fclose(file);
	exit(EXIT_SUCCESS);
}
