#include "shell.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * tok_args - Tokenizes a string into an array of arguments.
 * @input_buffer: The string to tokenize.
 *
 * Return: A pointer to an array of arguments.
 */
char **tok_args(char *input_buffer)
{
	char *token;
	char **argv;
	int token_count = 0, i = 0;
	char *input_copy;

	while (*input_buffer == ' ' || *input_buffer == '\t')
		input_buffer++;

	input_copy = strdup(input_buffer);
	if (input_copy == NULL)
	{
		perror("Memory allocation error");
		exit(EXIT_FAILURE);
	}

	token = strtok(input_copy, " ");
	while (token != NULL)
	{
		token_count++;
		token = strtok(NULL, " ");
	}

	argv = malloc((token_count + 1) * sizeof(char *));
	if (argv == NULL)
	{
		perror("Memory allocation error");
		free(input_copy);
		exit(EXIT_FAILURE);
	}

	token = strtok(input_buffer, " ");
	while (token != NULL)
	{
		argv[i++] = token;
		token = strtok(NULL, " ");
	}
	argv[i] = NULL;

	free(input_copy);

	return (argv);
}

	argv[token_count] = NULL;
	return (argv);
}
