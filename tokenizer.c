#include "main.h"
/**
 * my_strtok - Custom string tokenizer function.
 * @buffer: Input string to tokenize.
 *
 * Return: Returns an array of pointers to the tokens, with a NULL terminator.
 */
char **my_strtok(char *buffer)
{
	char *copy = NULL;
	char *ARGUMENT;
	char *delimiter = " \n\t";
	char **arguments = NULL;
	int token_count = 1, i = 0;

	copy = strdup(buffer);
	strtok(copy, delimiter);
	while ((strtok(NULL, delimiter)) != NULL)
		token_count++;
	free(copy), copy = NULL;
	arguments = malloc(sizeof(char *) * (token_count + 1));
	ARGUMENT = strtok(buffer, delimiter);

	while (ARGUMENT != NULL)
	{
		arguments[i] = strdup(ARGUMENT);
		i++;
		ARGUMENT = strtok(NULL, delimiter);
	}
	arguments[i] = NULL;
	free(buffer), buffer = NULL;
	return (arguments);
}
