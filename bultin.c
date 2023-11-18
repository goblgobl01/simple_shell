#include "main.h"
/**
 * execute_builtin - Executes built-in commands.
 * @arguments: Array of command arguments.
 * @envp: Array of environment variables.
 * Return: 1 if successful, 0 otherwise.
 */
int execute_builtin(char **arguments, char **envp)
{
	if (arguments[0] == NULL)
		return (1);
	else if (my_strcmp(arguments[0], "exit") == 0)
	{
		free_tokens(arguments);
		exit(0);
	}
	else if (my_strcmp(arguments[0], "env") == 0)
	{
		char **env = envp;
	while (*env != NULL)
	{
		printf("%s\n", *env);
		env++;
	}
		free_tokens(arguments);
		return (1);
	}

	return (0);
}
