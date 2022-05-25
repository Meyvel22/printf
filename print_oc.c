#include "main.h"

/**
 * print_oc - takes an unsigned int and prints it in octal notation
 * @o: unsigned integer
 *
 * Return: numbers printed
 */
int print_oc(va_list o)
{
	unsigned int x[11];
	unsigned int e, f, g, add;
	int list;

	g = va_arg(o, unsigned int);
	f = 1073741824;
	x[0] = g / f;
	for (e = 1; e < 11; e++)
	{
		f /= 8;
		x[e] = (g / f) % 8;
	}
	for (e = 0, add = 0, list = 0; e < 11; e++)
	{
		add += x[e];
		if (add || e == 10)
		{
			_putchar('0' + x[e]);
			list++;
		}
	}
	return (list);
}
