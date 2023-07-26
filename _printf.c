#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
* _printf - prints anything
*
*/
int _printf(const char *format, ...)
{
	int i;
	int printed;
	va_list args;
	int (*res)(va_list);

	i = 0;
	printed = 0;

	if (format == NULL)
	{
		return (-1);
	}

	va_start(args, format);

	while (format[i] != '\0')
	{
      if (format[i] == '%')
      {
	      if (format[i + 1] == '\0')
	      {
		      va_end(args);
		      return (-1); // exit cause nothing there
	      }
	      res = get_form_func(format[i + 1]);
	      if (res == NULL)
	      {
		      _putchar('%');
		      _putchar(format[i + 1]);
		      printed = printed + 2;
	      }
	      else
	      {
		      printed = printed + (*res)(args);
	      }
	      i = i + 1;
      }
      else
      {
	      _putchar(format[i]);
	      printed = printed + 1;
      }
      i = i + 1;
	}
	va_end(args);
	return (printed);
}
