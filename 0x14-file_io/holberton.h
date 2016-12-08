#ifndef FILE_IO
#define FILE_IO
#include <sys/types.h>
#include <stddef.h>
#include <stdlib.h>
#include "holberton.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <sys/stat.h>
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
char *_memset(char *s, char b, unsigned int n);
int create_file(const char *filename, char *text_content);
int _strlen(char *s);
int append_text_to_file(const char *filename, char *text_content);
#endif
