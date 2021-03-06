#include <stdio.h>
//#include <string.h>
// Function declarations
// typedef __w64 unsigned int size_t
size_t strlen(const char *);
char *strrev(char *);
char *itoa(int, char *, int);
int main() {
  int num = 123;
  char buf[5];
  itoa(num, buf, 10);
  printf("%s\n", buf);
  return 0;
}
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
