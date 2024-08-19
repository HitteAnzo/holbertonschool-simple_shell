#include "shell.h"

/**
 * _error - print default error message
 *
 * Return: void
 */
int _error(void)
{
	perror("./hsh - not found");
	return (EXIT_FAILURE);
}
