#include "main.h"

/**
 *  _printf - prints %c and %s format specifier
 *  @format: format string
 *  Return: charaters
 */

int _printf(const char *format, ...)
{
	unsigned int x = 0, list = 0;
	va_list arglist;
	int (*func)(va_list);

	if (format == NULL)
		return (-1);

	va_start(arglist, format);

	while (format[x])
	{
		for (; format[x] != '%' && format[x]; x++)
		{
			_putchar(format[x]);
			list++;
		}

		if (!format[x])
			return (list);

		f = check_specifies(&format[x + 1]);
		if (func != NULL)
		{
			list += func(arglist);
			x += 2;
			continue;
		}
		if (!format[x + 1])
			return (-1);
		_putchar(format[x]);
		list++;
		if (format[x + 1] == '%')
			x += 2;
		else
			x++;
	}
	va_end(arglist);
	return (list);
}
