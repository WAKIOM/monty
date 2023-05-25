#include "monty.h"
/**
 * sub_stack_error - Handles error when stack is too short for sub opcode.
 * @line_number: Line number of the instruction.
 */
void sub_stack_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: can't sub, stack too short\n", line_number);
	exit(EXIT_FAILURE);
}

/**
 * mul_stack_error - Handles error when stack is too short for mul opcode.
 * @line_number: Line number of the instruction.
 */
void mul_stack_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: can't mul, stack too short\n", line_number);
	exit(EXIT_FAILURE);
}

/**
 * div_stack_error - Handles error when stack is too short for div opcode.
 * @line_number: Line number of the instruction.
 */
void div_stack_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: can't div, stack too short\n", line_number);
	exit(EXIT_FAILURE);
}

/**
 * zero_error - Handles error when division by zero is attempted.
 * @line_number: Line number of the instruction.
 */
void zero_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: division by zero\n", line_number);
	exit(EXIT_FAILURE);
}

/**
 * mod_stack_error - Prints the "can't mod, stack too short" error message.
 * @line_number: Line number of the instruction.
 */
void mod_stack_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: can't mod, stack too short\n", line_number);
	exit(EXIT_FAILURE);
}
