#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/stat.h>

extern char **environ;

char *_strdup(char *str);
char *_strcpy(char *str, char *src);
int _strcmp(char *str, char *src);
char *str_concat(char *s1, char *s2);

void prompt(char *, ssize_t);
char *find_file(char *filename, char *path);
char *is_with_path(char *filename);
void print_env(void);
int print_continue(char *argv);

void _fork(char **arg);
void exec(char *arg[]);

void _exec(char *arg[]);
void _strtok(char **, char *, char );
#endif
