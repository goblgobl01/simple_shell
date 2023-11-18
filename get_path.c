#include "main.h"
/**
 * find_command_path - Finds the path of a command in the PATH environment.
 * @argument: The command to find.
 * @envp: The environment variables.
 *
 * Return: The path of the command if found, NULL otherwise.
 */
char *find_command_path(char *argument, char **envp)
{
char *PATH, *command_path, *sub_path, *delim = ":";
struct stat checker;
int path_len, arg_len;
char *argument_checker;

argument_checker = checkCommandPath(argument);
if (argument_checker)
{
return (argument_checker);
}
PATH = environment_variable_content(envp, "PATH");
if (PATH == NULL)
{
return (NULL);
}
sub_path = strtok(PATH, delim);
while (sub_path != NULL)
{
path_len = strlen(sub_path);
arg_len = strlen(argument);
command_path = malloc(arg_len + path_len + 2);
if (command_path)
{
strcpy(command_path, sub_path);
strcat(command_path, "/");
strcat(command_path, argument);
if (stat(command_path, &checker) == 0)
{
free(PATH);
return (command_path);
}
free(command_path), command_path = NULL;
}
sub_path = strtok(NULL, delim);
}
free(PATH);
return (NULL);
}
