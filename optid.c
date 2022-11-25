#include "main.h"

/**
* optid - scan source string for operator option
* @list: variadic argument data type list
* @bufer: pointer to bufer
* @src: string to scan
* @src_i: index formator '%' was found
*
* Return: count
*/

int optid(buffer *bufer, va_list list, const char *src, int src_i)
{
	int i, j, k = 0;
	opt idArray[] = {
		{"c", write_char},
		{"s", write_string},
		{"%", write_modulus},
		{"i", write_integer},
		{"h", NULL},
		{" ", NULL},
		{"x", NULL},
		{"b", write_bin},
		{NULL, NULL}
	};

	for (i = 1; src[i + src_i]; i++)
	{
		for (j = 0; idArray[j].op; j++)
		{
			if (src[i + src_i] == *(idArray[j].op))
		}

	}
}
