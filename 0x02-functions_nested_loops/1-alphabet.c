#include "holberton.h"
/**
 * print_alphabet() - program starts, evaluates and prints a string
  * Return: 0
 */
void print_alphabet(void)
{
  char c = 'a';

  while (c <= 'z')
    {
      _putchar(c);
      c++;
    }
  _putchar('\n');
}
