#include "monty.h"
/**
 * pchar_empty_error - Prints the error message.
 * @line_number: Line number of the instruction.
 */
void pchar_empty_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: can't pchar, stack empty\n", line_number);
	exit(EXIT_FAILURE);
}

/**
 * range_error - Prints error message when char is outof range.
 * @line_number: Line number of the instruction.
 */
void range_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: can't pchar, value out of range\n", line_number);
	exit(EXIT_FAILURE);
}
