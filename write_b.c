#include "main.h"

/**
 * write_b - takes an unsigned int and prints it in binary notation
 * @b: unsigned integer
 *
 * Return: numbers printed
 */

int write_b(va_list b)
{
	unsigned int g, f, e, add;
	unsigned int x[32];
	int list;

	g = va_arg(b, unsigned int);
	f = 2147483648;
	x[0] = g / f;
	for (e = 1; e < 32; e++)
	{
		f /= 2;
		x[e] = (g / f) % 2;
	}
	for (e = 0, add = 0, list = 0; e < 32; e++)
	{
		add += x[e];
		if (add || e == 31)
		{
			_putchar('0' + x[e]);
			list++;
		}
	}
	return (list);
}
