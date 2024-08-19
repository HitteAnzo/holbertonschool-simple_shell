#include "shell.h"

/**
 * path_finder - finds full path of a command in PATH environment variable.
 * @cmd: The command to find
 * @work_buffer: The buffer to store the full path.
 * Return: EXIT_SUCCESS if the command is found, EXIT_FAILURE otherwise.
 */
int path_finder(char *cmd, char *work_buffer)
{
	char *token;
	char *var_path, *var_value_path;

	if ((cmd[0] == '/' || strncmp(cmd, "./", 2) == 0 ||
		strncmp(cmd, "../", 3) == 0) && file_checker(cmd) == EXIT_SUCCESS)
		return (EXIT_SUCCESS);

	var_value_path = _getenv("PATH");
	if (var_value_path == NULL)
		return (EXIT_FAILURE);
	if (strlen(var_value_path) == 0)
		return (EXIT_FAILURE);

	var_path = strdup(var_value_path);
	if (var_path == NULL)
		return (EXIT_FAILURE);

	token = strtok(var_path, ":");
	while (token)
	{
		if (sprintf(work_buffer, "%s/%s", token, cmd) < 0)
		{
			free(var_path);
			return (EXIT_FAILURE);
		}

		if (file_checker(work_buffer) == EXIT_SUCCESS)
		{
			free(var_path);
			return (EXIT_SUCCESS);
		}
		token = strtok(NULL, ":");
	}
	free(var_path);
	return (EXIT_FAILURE);
}
