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

/**
*
*/
int write_str(va_list args)
{
	char *s;
	int i;
	int len;

	i = 0;
	s = va_arg(args, char *);

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i = i + 1;
	}
	return (i);
}
