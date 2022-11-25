#include "main.h"

/**
* _putchar - write single character to stand output
* @c: charcater to write
*
* Return: Always 0, -1 if error and set appropriate error number
*/

int _putchar(char c)
{
	return (buffer(c));
}

/**
* Buffer - save character in a buffer
* @c: character to save
*
* Return: Always 0
*/

int buffer(char c)
{
	static char buffering[1024];
	static int i;

	if (c == -1 || i == 1024)
	{
		write(1, buffering, i);
		i = 0;
	}
	if (c != -1)
		buffering[i++] = c;
}	return (1);
