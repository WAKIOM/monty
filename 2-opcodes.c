#include "monty.h"
/**
 * mul - Multiplies top two elements of the stack.
 * @stack: Double pointer to stack.
 * @line_number: Line number of instruction.
 */
void mul(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		mul_stack_error(line_number);
		return;
	}

	temp = *stack;
	(*stack)->next->n *= (*stack)->n;
	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	free(temp);
}

/**
 * _div - Divides second top element by top element of the stack.
 * @stack: Double pointer to the stack.
 * @line_number: Line number of the instruction.
 */
void _div(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		div_stack_error(line_number);
		return;
	}

	if ((*stack)->n == 0)
	{
		zero_error(line_number);
		return;
	}

	temp = *stack;
	(*stack)->next->n /= (*stack)->n;
	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	free(temp);
}

/**
 * mod - Computes the rest of the division of the second top element
 *       by the top element of the stack.
 * @stack: Double pointer to the stack.
 * @line_number: Line number of the instruction.
 */
void mod(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		mod_stack_error(line_number);
	}

	if ((*stack)->n == 0)
	{
		zero_error(line_number);
	}
	temp = *stack;
	(*stack)->next->n %= (*stack)->n;
	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	free(temp);
	if (*stack)
		pop(stack, line_number);
}
