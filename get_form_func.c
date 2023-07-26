#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include "main.h"

/**
 * get_form_func - Gets the right format
 *
 * @type: Type of format
 * @args: Arguments being printed
 *
 * Return: Format specifier else NULL
 */
int (*get_form_func(char type))(va_list args)
{
	what_format pzf[] = {
		{"c", write_char},
		{"s", write_str},
		{"%", write_percent},
		{"d", write_num},
		{"i", write_num},
		{NULL, NULL}
	};

	int i;

	i = 0;

	while (pzf[i].formatz != NULL)
	{
		if (pzf[i].formatz[0] == type)
		{
			return (pzf[i].f);
		}
		i = i + 1;
	}
	return (NULL);
}
