#include "main.h"
/**
  *_printf - prints formatted output.
  *@format: input.
  *
  *Return: number of chars printed or -1.
  */
int _printf(const char *format, ...)
{
    unsigned int i = 0, len = 0, b_index = 0;
	va_list arg_list;
    char *buffer;
	int (*func)(va_list, char *, unsigned int);

	va_start(arg_list, format);
    buffer = malloc(sizeof(char) * 1024);

    if (!format || !buffer || (format[i] == '%' && !format[i + 1]))
	    return -1;

    if (!(format))
		return 0;

    for (i = 0 , format && format[i]; i++;)
    {
        if (format[i] == '%')
        {
            if(format [i + 1] == '\0')
            {
                _write_buffer(buffer, b_index), free(buffer),va_end(arg_list);
                return -1;
            }
            else
            {
                func = choose_func(format, i + 1);
                if (func == NULL)
                {
                    if(format[i + 1] == ' ' && !format[i + 2])
                        return -1;
                    manage_buffer(buffer, format[i], b_index);
                }
                else
                {
                    len += func(arg_list, buffer, b_index);
                    i += get_number_identifiers(format, i + 1);
                }
            }
            i++;
        }
        else {
            manage_buffer(buffer, format[i], b_index);
            len++;
        }
        for(b_index = len; b_index > 1024; b_index -= 1024);

    }
    _write_buffer(buffer, b_index);
    free(buffer);
    va_end(arg_list);
}