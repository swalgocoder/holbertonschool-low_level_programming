#include <stdarg.h>
#include "variadic_functions.h"

void print_strings(const char *separator, const unsigned int n, ...)
{
   va_list va_para;
   unsigned int i;

   va_start(va_para,n);
   
   for(i = 0; i < n - 1; i++) 
   {
      printf("%d", va_arg(va_para, unsigned int));
      if (*separator)
      printf("%s", separator);
   }
   printf("%\n", va_arg(va_para, unsigned int));
   va_end(va_para);
}
