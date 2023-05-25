#include "monty.h"

/**
 * push - Pushes an element to the stack.
 * @stack: Double pointer to the stack.
 * @value: the value
 * @line_number: Line number of the instruction.
 */
void push(stack_t **stack, int value, unsigned int line_number)
{
	char str_value[12];
	stack_t *new_node;

	sprintf(str_value, "%d", value);
	if (!is_number(str_value))
	{
		push_arg_error(line_number);
		return;
	}
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		malloc_error();
		return;
	}

	new_node->n = value;
	new_node->prev = NULL;
	new_node->next = *stack;

	if (*stack)
		(*stack)->prev = new_node;

	*stack = new_node;
}

/**
 * pall - Prints all the values on the stack.
 * @stack: Double pointer to the stack.
 *
 */
void pall(stack_t **stack)
{
	stack_t *current;

	current = *stack;

	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}

/**
 * pint - Prints the value at the top of the stack.
 * @stack: Double pointer to the stack.
 * @line_number: Line number of the instruction.
 */
void pint(stack_t **stack, unsigned int line_number)
{
	if (!*stack)
	{
		emptyStack_error(line_number);
	}

	printf("%d\n", (*stack)->n);
}
