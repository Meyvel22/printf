#include "main.h"

/**
  * _write_octal - Prints octal notation of a number
  * @arg_list: List of arguments
  * @l: length of int
  *
  * Return: The length
  */

int _write_octal(va_list arg_list, int l)
{
	unsigned int n = va_arg(arg_list, unsigned int);

	l += _write_numbers(n, 8, "01234567");

	return (l);
}
