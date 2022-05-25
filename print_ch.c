#include "main.h"

/**
 * print_ch - prints a char
 * @c: character to print
 *
 * Return: always 1
 */

int print_ch(va_list c)
{
	char ch = (char)va_arg(c, int);

	_putchar(ch);
	return (1);
}
