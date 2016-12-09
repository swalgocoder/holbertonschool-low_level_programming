#ifndef HOLBERTON_H
#define HOLBERTON_H
#define BUFFERSIZE 1204
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void error_check(int argc, char *file1, char *file2);
int open_file(const char *filename);
#endif
