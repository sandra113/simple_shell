#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <stdbool.h>

#define BUFFER_SIZE 1024
#define MAX_PATH_LENGTH 1024

void parse_input(char *input, char **cmd);
void print_env(char *envp[]);
char *get_path(char *input, char **envp);
void free_input(char **cmd);
int _execve(char *path, char **cmd, char **env,
	char **argv, char *input);
int _getline(char *buffer);
void handle_exit(char *input, char **cmd, char *argv[]);
int cd_cmd(char **cmd);
int run_commands(char *input, char **env, char **argv);
void remove_comments(char *buf);

int _unsetenv(char **cmd);
int _setenv(char **cmd);
char *strip_whitespace(char *input);

#endif /* MAIN_H */
