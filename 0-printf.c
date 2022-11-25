#include "main.h"
#include <stdio.h>

/**
* _printf - print output according to a format
* @format: string format to write to buffer
*
* Return: integer counter of how many written to buffer
*/

int _printf(const char *format, ...)
{
	va_list list;
	int i;}

	if (format == NULL)
		return (-1);
	i = _strlen(format);
	if (i <= 0)
		return (0);

	va_start(list, format);
	i = handler(format, list);

	_putchar(-1);
	va_end(list);
	return (i);
}
