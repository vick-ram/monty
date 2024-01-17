#include "monty.h"
#include <stdio.h>
/**
*main - entry point
*@argc: int type cmd param
*@argv: array of arguments
*Return: - returns success
*/
int main(int argc, char *argv[])
{
	char *line = NULL;
	FILE *file;
	size_t len = 0;
	ssize_t read;
	stack_t *stack = NULL;
	unsigned int line_number = 0;

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
		parseInstructions(line, &stack, line_number);
	}
	free(line);
	fclose(file);
	return (EXIT_SUCCESS);
}
