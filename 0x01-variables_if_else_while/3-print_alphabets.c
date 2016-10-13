#include <stdio.h>
/*
 *print the alphabet using only putchar
 */
/**
 *main - program's entry point
 *lower case, upper case alphabet, putchar 
 *Return: 0
 */
int main(void)
{
  char c = 'a';

  while (c <= 'z')
    {
      putchar(c);
      c++;
    }
  c = 'A';
  while (c <= 'Z')
    {
      putchar(c);
      c++;
    }
  putchar('\n');

  return (0);
}
