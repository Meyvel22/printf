#include "main.h"
/**
  *_printf - prints formatted output.
  *@format: input.
  *
  *Return: number of chars printed or -1.
  */
int _printf(const char *format, ...)
{
	va_list arg_list;
	int x, num;
	int (*find_ptr)(va_list, int);

	va_start(arg_list, format);
	if (!(format))
		return (-1);
	x = 0;
	num = 0;
	while (format && format[x])
	{
		if (format[x] == '%')
		{
			x++;
			if (format[x] == '%')
			{
				num += _putchar(format[x]);
				x++;
				continue;
			}
			if (format[x] == '\0')
				return (-1);
			find_ptr = choose_func(format[x]);
			if (find_ptr != NULL)
				num = find_ptr(arg_list, num);
			else
			{
				num += _putchar(format[x - 1]);
				num += _putchar(format[x]);
			}
			x++;
		}
		else
		{
			num += _putchar(format[x]);
			x++;
		}
	}
	va_end(arg_list);
	return (num);
}
