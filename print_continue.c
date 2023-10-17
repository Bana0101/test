#include "main.h"

/**
 * print_continue - a function that print some edge case
 * @argv: the command line
 * Return: 0 or 1
 */
int print_continue(char *argv)
{
	if (*argv == '\0')
		return (1);
	if (_strcmp(argv, "env") == 0)
	{
		print_env();
		return (1);
	}
	return (0);
}
