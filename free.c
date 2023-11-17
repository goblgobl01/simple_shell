#include "main.h"
/**
 * free_tokens - Frees memory allocated for an array of tokens.
 * @arguments: The array of tokens to be freed.
 *
 */
void free_tokens(char **arguments)
{
int i;

for (i = 0; arguments[i]; i++)
	free(arguments[i]), arguments[i] = NULL;

free(arguments), arguments = NULL;
}
