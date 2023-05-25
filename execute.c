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
/**
 * process_line - Processes a single line of Monty bytecode.
 * @line: The line of bytecode to process.
 * @line_number: The line number of the bytecode.
 * @stack: Double pointer to the stack.
 */
void process_line(char *line, unsigned int line_number, stack_t **stack)
{
	char *argument, *opcode;
	int value;

	opcode = strtok(line, " \t\n");
	if (!opcode)
		return;
	if (strcmp(opcode, "push") == 0)
	{
		argument = strtok(NULL, " \t\n");
		if (!argument || !is_number(argument))
			int_error(line_number);
		value = atoi(argument);
		push(stack, value, line_number);
	}
	else if (strcmp(opcode, "pall") == 0)
		pall(stack);
	else if (strcmp(opcode, "pint") == 0)
	{
		pint(stack, line_number);
	}
	else if (strcmp(opcode, "pop") == 0)
	{
		pop(stack, line_number);
	}
	else if (strcmp(opcode, "swap") == 0)
	{
		swap(stack, line_number);
	}
	else if (strcmp(opcode, "add") == 0)
	{
		add(stack, line_number);
	}
	else if (strcmp(opcode, "nop") == 0)
	{

	}
	else
	{
		Instruction_error(opcode, line_number);
	}
}
