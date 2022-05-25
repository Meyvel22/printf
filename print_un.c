#include "main.h"

/**
 * print_un - prints an unsigned in in decimal notation
 * @u: unsigned integer
 *
 * Return: numbers printed
 */
int print_un(va_list u)
{
	unsigned int x[10];
	unsigned int e, f, g, add;
	int list;

	g = va_arg(u, unsigned int);
	f = 1000000000; /* (10 ^ 9) */
	x[0] = g / f;
	for (e = 1; e < 10; e++)
	{
		f /= 10;
		x[e] = (g / f) % 10;
	}
	for (e = 0, add = 0, list = 0; e < 10; e++)
	{
		add += x[e];
		if (add || e == 9)
		{
			_putchar('0' + x[e]);
			list++;
		}
	}
	return (list);
}
