#include "main.h"
/**
 * my_strlen - Calculates the length of a string.
 * @string: The input string.
 *
 * Return: The length of the string.
 */
int my_strlen(char *string)
{
int count = 0;

while (string[count])
{
count++;
}
return (count);
}
