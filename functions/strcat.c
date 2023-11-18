#include "main.h"
/**
 * my_strcat - Concatenates two strings.
 * @dester: Destination string to which the source string is appended.
 * @scrcat: Source string that is appended to the destination.
 *
 * Return: Pointer to the destination string.
 */
char *my_strcat(char *dester, char *scrcat)
{
char *str = dester;

while (*str)
{
str++;
}
while (*scrcat)
{
*str = *scrcat;
str++;
scrcat++;
}
*str = '\0';
return (dester);
}
