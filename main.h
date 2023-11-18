#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>
#include <fcntl.h>
#include <sys/wait.h>


char *my_getline();
char **my_strtok(char *buffer);
void free_tokens(char **arguments);
int _execute(char **arguments, char **argv, char **envp, int index);
char *find_command_path(char *argument, char **envp);
char *environment_variable_content(char **envp, char *environment_variable);
int execute_builtin(char **arguments, char **envp);
char *checkCommandPath(const char *path);
char *_strchr(const char *str, char character);

/*strings function
char *my_strcat(char *dester, char *scrcat);
int my_strcmp(char *str1, char *str2);
char *my_strcpy(char *dest, char *src);
char *my_strdup(const char *string);
int my_strlen(char *string);*/


#endif