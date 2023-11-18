#include "main.h"
/**
 * main - Entry point for a custom shell program
 * @ac: Number of arguments
 * @argv: Array of arguments
 * @envp: Array of environment variables
 * Return: Always 0
 */
int main(int ac, char **argv, char **envp)
{
	char *buffer = NULL;
	char **arguments = NULL;
	int status, index = 0;
	(void) ac;
	(void) status;

	while (1)
	{
		buffer = my_getline();
		index++;
		if (buffer == NULL)
			continue;

		arguments = my_strtok(buffer);

		status = _execute(arguments, argv, envp, index);
	}
	return (status);
}
