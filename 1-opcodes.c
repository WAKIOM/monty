#include "monty.h"
/**
 * swap - Swaps the top two elements of the stack.
 * @stack: Double pointer to the stack.
 * @line_number: Line number of the instruction.
 */
void swap(stack_t **stack, unsigned int line_number)
{
	int temp;

	if (!*stack || !(*stack)->next)
	{
		swap_error(line_number);
	}

	temp = (*stack)->n;
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = temp;
}

/**
 * add - Adds the top two elements of the stack.
 * @stack: Double pointer to the stack.
 * @line_number: Line number of the instruction.
 */
void add(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (!*stack || !(*stack)->next)
	{
		add_stack_error(line_number);
	}

	(*stack)->next->n += (*stack)->n;
	temp = *stack;
	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	free(temp);
}

/**
 * nop - Does nothing
 */
void nop(void)
{

}

/**
 * pop - Removes the top element of the stack.
 * @stack: Double pointer to the stack.
 * @line_number: Line number of the instruction.
 */
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (*stack == NULL)
	{
		pop_error(line_number);
	}

	temp = *stack;
	*stack = (*stack)->next;

	if (*stack != NULL)
	{
		(*stack)->prev = NULL;
	}

	free(temp);
}
