#include<stdio.h>
#include<stdarg.h>
int _printf(char *str, ...)
{
  int my_s_char, total, arg1, count, str_len;
  float arg2;
  char token, *arg3, arg_s;

  int my_str_len(char *str)
  {
   int count = 0; 

   while (str[count]!= '\0')
     {
     count++;
     }
   printf("inside call length is:%d", count);
   return (count);
  }  

  str_len = my_str_len(str);

  printf("outside call: the lenght:%d",str_len);

  va_list ap;
  va_start(ap,str);
  while(*str!='\0')
    {
      for (count = 0; str[count] != '\0'; count++)
	{
	}
      str_len=count++;

      if(*str=='"')
	{
	  token=*(++str);
	  switch(token)
	    {
	    case 'c':
	      arg1=va_arg(ap,int);
	      printf("%c",arg1);
	      break;
	    case 'd':
	      arg1=va_arg(ap,int);
	      printf("%d",arg1);
	      break;
 
	    case '%':
	      putchar(token);
	      break;
 
	    case 's':
	      printf("%s",va_arg(ap,char *));
	      break;
 
	    case 'f':
	      printf("%f",va_arg(ap,double));
	      break;
	    }
	}
      else
	putchar(*str);
      str++;
    }
  return (str_len);
}
int main()
{
  int i=6;
  float j=2.3;
  int len;

  char *my_str="this";

  _printf(my_str);
  return 0;
}
