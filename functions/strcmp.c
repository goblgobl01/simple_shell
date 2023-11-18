#include "main.h"
/**
 * my_strcmp - Compare two strings.
 * @str1: First string to compare.
 * @str2: Second string to compare.
 *
 * Return: The difference between the ASCII values of the first non-matching
 * characters, or 0 if the strings are identical.
 */
int my_strcmp(char *str1, char *str2)
{
int count;

count = (int)*str1 - (int)*str2;
while (*str1)
{
if (*str1 != *str2)
{
break;
}
str1++;
str2++;
count = (int)*str1 - (int)*str2;
}
return (count);
}
