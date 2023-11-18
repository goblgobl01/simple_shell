#include "main.h"
/**
 * checkCommandPath - Checks if the given path is valid and accessible.
 * @path: The path to be checked.
 *
 * Return: If the path is valid, a duplicate of the path is returned.
 *         Otherwise, NULL is returned.
 */

char *checkCommandPath(const char *path)
{
if (_strchr(path, '/'))
{
struct stat path_stat;
if (stat(path, &path_stat) == 0)
{
return (strdup(path));
}
}
return (NULL);
}
