#include "main.h"

/**
 * print_st - prints a string
 * @s: string
 *
 * Return: number of characters to print
 */

int print_st(va_list s)
{
	int list;
	char *st = va_arg(s, char *);

	if (st == NULL)
		st = "(null)";

	for (list = 0; st[list]; list++)
	{
		_putchar(st[list]);
	}

	return (list);
}
