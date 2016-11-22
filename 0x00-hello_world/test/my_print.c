#include "holberton.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
                                                                            
// Function declarations                                                                                          
// typedef __w64 unsigned int size_t                                                                              
size_t strlen(const char *);
char *strrev(char *);
char *itoa(int, char *, int);

size_t strlen(const char *string) {
  const char *s;
  s = string;
  while (*s)
    s++;
  return s - string;
}
char *strrev(char *str) {
  char *p1, *p2;
  if (!str || !*str)
    return str;
  for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2) {
    *p1 ^= *p2;
    *p2 ^= *p1;
    *p1 ^= *p2;
  }
  return str;
}
char *itoa(int n, char *s, int b) {
  static char digits[] = "0123456789abcdefghijklmnopqrstuvwxyz";
  int i=0, sign;

  if ((sign = n) < 0)
    n = -n;
  do {
    s[i++] = digits[n % b];
  } while ((n /= b) > 0);
  if (sign < 0)
    s[i++] = '-';
  s[i] = '\0';
  return strrev(s);
}




void _fputs(char *str)
{

  int count, count2, str_count;
  char buffer[5];


  count = 0;
  while (str[count] != '\0')
    {
      _putchar(str[count]);
      count++;
    }
  str_count = count;

  itoa(str_count,buffer,10);

  count2 = 0;
  
    while (buffer[count2] != '\0')
    {
      _putchar(buffer[count2]);
      count2++;
    }



void main ()
{

  char str[] = "Hello World!";

_fputs(str);
}
