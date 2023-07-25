#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
*
*/
int write_char(va_list args)
{
  char c;
  c = (char)va_arg(args, int);
  _putchar(c);
  return (1);
}
