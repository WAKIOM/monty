#include "monty.h"
/**
 * int_error - Handles the error when a parameter received is not an integer.
 * @line: The line number where the error occurs.
 */
void int_error(unsigned int line)
{
	fprintf(stderr, "L%u: usage: push integer\n", line);
	exit(EXIT_FAILURE);
}
/**
 * Instruction_error - Handles an error for an unknown instruction.
 * @instruction: The unrecognized instruction.
 * @line: The line number where the error occurred.
 */
void Instruction_error(char *instruction, unsigned int line)
{
	fprintf(stderr, "L%u: unknown instruction %s\n", line, instruction);
	exit(EXIT_FAILURE);
}

/**
 * open_error - Handles the error when opening a file.
 * @filename: The name of the file that failed to open.
 */
void open_error(const char *filename)
{
	fprintf(stderr, "Error: Can't open file %s\n", filename);
	exit(EXIT_FAILURE);
}

/**
 * pop_error - Handles the error when pop is called on an empty stack.
 * @line_number: Line number of the instruction.
 */
void pop_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
	exit(EXIT_FAILURE);
}

/**
 * error_arguments - Displays an error message for invalid arguments.
 */
void error_arguments(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}
