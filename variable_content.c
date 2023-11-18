#include "main.h"
/**
 * environment_variable_content - Get content of an environment variable.
 * @envp: Pointer to the environment variables array.
 * @environment_variable: Name of the target environment variable.
 *
 * Return: Content of the environment variable if found, NULL otherwise.
 */
char *environment_variable_content(char **envp, char *environment_variable)
{
char *content, *copy, *storage;
int i = 0;

while (envp[i])
{
copy = strdup(envp[i]);
storage = strtok(copy, "=");
if (strcmp(storage, environment_variable) == 0)
{
storage = strtok(NULL, "\n");
content = strdup(storage);
free(copy);
return (content);
}
free(copy);
i++;
}
return (NULL);
}
