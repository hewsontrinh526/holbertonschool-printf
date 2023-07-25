#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
*
*/
int _printf(const char *format, ...)
{
  int i;
  int printed;
  va_list args;
  int (*res)(va_list);

  printed = 0;
  
  if (format == NULL)
  {
    return (-1);
  }
  
  va_start(args, format);

  i = 0; 
  
  while (format[i] != '\0')
    {
      if (format[i] == '%')
        {  
          if (format[i + 1] == '\0')
          {
            va_end(args);
            return (-1);
          }
          res = get_form_func(format[i + 1]);
          if (res != NULL)
          {
            printed = printed + res(args);
          }
          i = i + 2;
        }
      else
      {
        _putchar(format[i]);
        printed = printed + 1;
      }
    i = i + 1;
    }
  va_end(args);
  _putchar('\n');
  return (printed);
}
