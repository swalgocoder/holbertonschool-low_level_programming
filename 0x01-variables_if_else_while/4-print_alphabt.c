#include <stdio.h>
#include <stdlib.h>


int main(void)
{
  char i;

  for(i = 'a'; i != 'q' && i != 'e'; i <= 'z'; i++)
    putchar(i);

  putchar('\n'); 

  return 0;
}
