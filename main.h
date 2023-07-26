#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>

/**
 * struct what_format - Structure used to match specifier with corresponding
 * function
 *
 * @formatz: String to be printed
 * @f: Function pointer for which specifier to be used
 *
 */

typedef struct what_format
{
	const char *formatz;
	int (*f)(va_list args);
} what_format;

int write_char(va_list args);
int  write_str(va_list args);
int write_percent(va_list args);
int write_num(va_list args);
int _printf(const char *format, ...);
int _putchar(char c);
int (*get_form_func(char type))(va_list args);

#endif
