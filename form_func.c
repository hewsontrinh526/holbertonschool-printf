#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 * write_char - Printing a char
 *
 * @args: Argument to be printed
 *
 * Return: Output char, else 1
 */
int write_char(va_list args)
{
	char c;

	c = (char)va_arg(args, int);
	_putchar(c);
	return (1);
}

/**
 * write_str - Prints a string
 *
 * @args: Argument to be printed
 *
 * Return: Output string, else 1
 */
int write_str(va_list args)
{
	char *s;
	int i;

	i = 0;
	s = va_arg(args, char *);

	if (s == NULL)
	{
		s = "(null)";
	}
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i = i + 1;
	}
	return (i);
}

/**
 * write_percent - Prints a percent sign
 *
 * @args: Argument to be printed
 *
 * Return: Percent sign, else 1
 */
int write_percent(__attribute__((unused)) va_list args)
{
	_putchar('%');
	return (1);
}

/**
 * int_to_char - Converts an integer to a char
 *
 * @num: Integer to be converted
 *
 * Return: Output char, else 1
 */
int int_to_char(long num)
{
	int i;

	i = 0;

	if (num < 0)
	{
		_putchar('-');
		num = num * -1;
		i = i + 1;
	}
	if (num / 10 != 0)
	{
		i = i + int_to_char(num / 10);
	}
	_putchar(num % 10 + '0');
	i = i + 1;
	return (i);
}

/**
 * write_num - Prints an number
 *
 * @args: Argument to be printe
 *
 * Return: Number to be printed
 */
int write_num(va_list args)
{
	int num;

	num = va_arg(args, int);
	return (int_to_char(num));
}
