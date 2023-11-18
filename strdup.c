#include "main.h"
/**
 * my_strdup - Duplicates a given string.
 * @string: The input string to be duplicated.
 *
 * Return: A pointer to the newly allocated duplicated string.
 */
char *my_strdup(const char *string)
{
char *strp;
int i, count = 0;

if (string == NULL)
{
return (NULL);
}
while (string[count])
{
count++;
}
strp = malloc(sizeof(char) * (count + 1));
if (strp == NULL)
{
return (NULL);
}
for (i = 0; i <= count; i++)
{
strp[i] = string[i];
}
return (strp);
}
