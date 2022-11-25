#include "main.h"

/**
* handler - Format handler
* @str: string to format
* @list: list of arguments
*
* Return: total number or agrs and size of the base string
*/

int handler(const char *str, va_list list)
{
	int size, i, aux;

	size = 0;
	for (i = 0; str[i] != 0; i++)
	{
		if (str[i] == '%')
		{
			aux = percent_handler(str, list, &i);
			if (aux == -1)
				return (-1);
			size += aux;
			continue;
		}
		_putchar(str[i]);
		size = size + 1;
	}
	return (size);
}

/**
* percent_handler - handler '%' formating
* @str: string format
* @list: List of arguments
* @i: iterator
*
* Return: Size of the number of elements printed
*/

int percent_handler(const char *str, va_list list, int *i)
{
	int size, i, num_formats;

	format opts[] = {
		{"s", write_string},
		{"c", write_character},
		{"d", write_integer},
		{"i", write_integer},
		{"b", write_binary},
		{"u", write_unsigned},
		{"o", write_octal},
		{"x", write_hexadecimal},
		{"X", write_hexadecimal_upper},
		{"p", write_pointer},
		{"r", write_rev_string},
		{"R", write_rot}
	};
	*i = *i + 1;
	if (str[*i] == '\0')
		return (-1);
	if (str[*i] == '%')
	{
		_putchar('%');
		return (1);
	}
	num_formats = sizeof(opts) / sizeof(opts[0]);
	for (size = i = 0; i < num_formats; i++)
	{
		if (str[*i] == optss[i].type)
		{
			size = opts[i].f(list);
			return (size);
		}
	}
	_putchar('%'), _putchar(str[*i]);
	return (2);
}
