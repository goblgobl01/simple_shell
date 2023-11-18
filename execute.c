#include "main.h"
/**
 * _execute - Execute a command with arguments.
 * @arguments: Array of command arguments.
 * @argv: Program name and arguments.
 * @envp: Array of environment variables.
 * @index: Index of the command in argv.
 *
 * Return: Exit status of the executed command.
 */
int _execute(char **arguments, char **argv, char **envp, int index)
{
char *command_path;
pid_t child;
int status;

if (execute_builtin(arguments, envp))
{
	return (0);
}
command_path = find_command_path(arguments[0], envp);
if (command_path == NULL)
{
	fprintf(stderr, "%s: %d: %s: not found\n", argv[0], index, arguments[0]);
	free_tokens(arguments);
	return (127);
}
child = fork();
if (child == 0)
{
	if (execve(command_path, arguments, envp) == -1)
	{
		free(command_path), command_path = NULL;
		free_tokens(arguments);
	}
}
else
{
	waitpid(child, &status, 0);
	free_tokens(arguments);
	free(command_path), command_path = NULL;
}
return (WEXITSTATUS(status));
}
