#include "main.h"

/**
 * write_c - prints a char
 * @c: character to print
 *
 * Return: always 1
 */

int write_c(va_list c)
{
	char ch = (char)va_arg(c, int);

	_putchar(ch);
	return (1);
}
