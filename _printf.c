#include "main.h"

/**
  *_printf - prints formatted output.
  *@format: input.
  *
  *Return: number of chars printed or -1.
  */

int _printf(const char *format, ...)
{
	unsigned int i, counter = 0;
	va_list arg_list;
	int (*func)(va_list);

	if (format == NULL)
	{
		return (-1);
	}

	va_start(arg_list, format);

	while (format[i])
	{
		for (i = 0; format[i] != '%' && format[i]; i++)
		{
			_putchar(format[i]);
			counter++;
		}
		if (format[i])
			return (counter);
		func = check_specifies(&format[i + 1]);
		if (func != NULL)
		{
			counter += func(arg_list);
			i += 2;
			continue;
		}
		if (!format[i + 1])
			return (-1);
		_putchar(format[i]);
		counter++;
		if (format[i + 1] == '%')
			i += 2;
		else
			i++;
	}
	va_end(arg_list);
	return (counter);
}
