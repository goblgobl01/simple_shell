#include "main.h"
/**
 * _strchr - Locates the first occurrence of a character in a string.
 *
 * @str: The string to search.
 * @character: The character to locate.
 *
 * Return: If the character is found, a pointer to the first occurrence
 *         in the string. Otherwise, returns NULL.
 */

char *_strchr(const char *str, char character)
{
while (*str != '\0')
{
if (*str == character)
{
return ((char *) str);
}
str++;
}
return (NULL);
}
