#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
*
*/
/** void write_std(va_list args)
{
  int i;

  i = 0;
  
  while (args[i] != '\0')
    {
      _putchar(args[i]);
      i = i + 1;
    }
} */

/**
*
*/
int write_char(va_list args)
{
      // write(1, va_arg(args, char), 1);
      // if we used putchar (below)
      //_putchar(va_arg(args, int));
  char c;
  c = (char)va_arg(args, int);
  _putchar(c);
  return (1);
}
