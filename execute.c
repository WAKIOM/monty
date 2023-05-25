#include "monty.h"

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
	if (opcode == NULL || opcode[0] == '#')
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
		pint(stack, line_number);
	else if (strcmp(opcode, "pop") == 0)
		pop(stack, line_number);
	else if (strcmp(opcode, "swap") == 0)
		swap(stack, line_number);
	else if (strcmp(opcode, "add") == 0)
		add(stack, line_number);
	else if (strcmp(opcode, "sub") == 0)
		sub(stack, line_number);
	else if (strcmp(opcode, "mul") == 0)
		mul(stack, line_number);
	else if (strcmp(opcode, "div") == 0)
		_div(stack, line_number);
	else if (strcmp(opcode, "nop") == 0)
	{
		/* do nothing */
	}
	else
	{
		Instruction_error(opcode, line_number);
	}
}
