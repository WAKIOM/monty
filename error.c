#include "monty.h"
/**
 * malloc_error -Main entry
 *Description: print message if cant malloc anymore
 * Return: void
 **/
void malloc_error(void)
{
	fprintf(stderr, "Error: malloc failed\n");
	exit(EXIT_FAILURE);
}

/**
 * emptyStack_error - Handles the error when stack is empty.
 * @line_number: Line number of the instruction
 */
void emptyStack_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
	exit(EXIT_FAILURE);
}

/**
 * push_arg_error - Handles error if push argument is missing or not an integer
 * @line_number: Line number of the instruction
 */
void push_arg_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: usage: push integer\n", line_number);
	exit(EXIT_FAILURE);
}

/**
 * swap_error - Handles the error when stack is too short for swap operation.
 * @line_number: Line number of the instruction
 */
void swap_error(unsigned int line_number)
{
	fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
	exit(EXIT_FAILURE);
}

/**
 * add_stack_error - Handles error when stack is too short for add operation
 * @line_number: Line number of the instruction
 */
void add_stack_error(unsigned int line_number)
{
	fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
	exit(EXIT_FAILURE);
}
