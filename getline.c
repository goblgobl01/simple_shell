#include "main.h"
/**
 * my_getline - Custom function to read a line from standard input
 *
 * Return: If the line is non-empty, a pointer to the line is returned.
 */
char *my_getline()
{
char *buffer = NULL;
size_t size;
ssize_t flag;
int white_space = 1, i;

if (isatty(STDIN_FILENO))
	printf("$ ");
flag = getline(&buffer, &size, stdin);
if (flag == -1)
{
	free(buffer);
	if (isatty(STDIN_FILENO))
		printf("\n");
	exit(0);
}
for (i = 0; i < (flag - 1); i++)
{
	if (buffer[i] != ' ' && buffer[i] != '\t')
	{
		white_space = 0;
		break;
	}
}
if (white_space == 0)
{
	return (buffer);
}
else
{
	free(buffer);
	return (NULL);
}
}
