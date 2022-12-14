#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

void genpath(void) __attribute__ ((constructor));
int prompt(void);
int search(char *path);
int dirtest(char *dir, char *file, int errno);
int check(char *file1, char *file2);
char *mygetc(void);
int checkWord(char *command);
int startProcess(char *command, char **args);
int pathCheck(char *command);
#endif
