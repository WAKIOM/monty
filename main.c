#include "monty.h"

/**
 * main - Entry point of the Monty program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	const char *file_path;

	if (argc != 2)
	{
		error_arguments();
	}

	file_path = argv[1];
	monty_run(file_path);
	return (0);
}

