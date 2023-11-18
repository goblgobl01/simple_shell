#include "main.h"
/**
 * my_strcpy - Copies a string from source to destination.
 * @dest: Destination string.
 * @src: Source string.
 *
 * Return: A pointer to the destination string.
 */
char *my_strcpy(char *dest, char *src)
{
int i = 0;

while (src[i])
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}
