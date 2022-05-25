#include "main.h"

/**
 * write_i - prints an integer
 * @i: integer
 *
 * Return: number of chars and numbers to print
 */

int write_i(va_list i)
{
	int x[10];
	int a, f, g, add, list;

	g = va_arg(i, int);
	list = 0;
	f = 1000000000;
	x[0] = g / f;

	for (a = 1; a < 10; a++)
	{
		f /= 10;
		x[a] = (g / f) % 10;
	}

	if (g < 0)
	{
		_putchar('-');
		list++;
		for (a = 0; a < 10; a++)
			x[a] *= -1;
	}

	for (a = 0, add = 0; a < 10; a++)
	{
		add += x[a];
		if (add != 0 || a == 9)
		{
			_putchar('0' + x[a]);
			list++;
		}
	}

	return (list);
}

