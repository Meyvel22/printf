#include "main.h"

/**
 * write_s - prints a string
 * @s: string
 *
 * Return: number of characters to print
 */

int write_s(va_list s)
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
