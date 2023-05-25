#include "monty.h"
#include <stdio.h>

/**
 * monty_run - Runs the Monty program with the specified file.
 * @file_path: The path to the file containing Monty byte code.
 */
void monty_run(const char *file_path)
{
	FILE *file;
	char line[MAX_LINE_LENGTH];
	unsigned int line_number = 0;
	stack_t *stack = NULL;

	file = fopen(file_path, "r");
	if (!file)
		open_error(file_path);

	while (fgets(line, MAX_LINE_LENGTH, file))
	{
		line_number++;
		process_line(line, line_number, &stack);
	}
	fclose(file);
}
