#include "monty.h"
#include <stdlib.h>
#include <stdbool.h>
/**
 * is_number - Checks if a string is a number.
 * @str: The string to check.
 *
 * Return: 1 if the string is a number, 0 otherwise.
 */
bool is_number(const char *str)
{
	int i;

	if (str == NULL || *str == '\0')
		return (false);

	i = 0;

	if (str[0] == '-' || str[0] == '+')
		i++;
	for (; str[i] != '\0'; i++)
	{
		if (!isdigit(str[i]))
		return (false);
	}

	return (true);
}
