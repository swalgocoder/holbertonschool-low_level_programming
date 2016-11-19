#include <stdarg.h>
#include "variadic_functions.h"

int sum_them_all(const unsigned int n, ...)
{

If (n == 0)
return (0);

   int sum = 0;
   va_list list_args;
   unsigned int i;

   va_start(list_args, n);
   
   for(i = 0; i < n; i++) 
   {
      sum += va_arg(list_args, int);
   }
   va_end(list_args);
 
   return sum;
}
