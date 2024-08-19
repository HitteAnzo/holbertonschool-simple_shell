#include "shell.h"

/**
 * file_checker - Checks if a file exists.
 * @file: The name of the file to check.
 * Return: EXIT_SUCCESS if the file exists, EXIT_FAILURE otherwise.
 */
int file_checker(char *file)
{
	struct stat st;

	if (stat(file, &st) == 0)
		return (EXIT_SUCCESS);

	return (EXIT_FAILURE);
}
