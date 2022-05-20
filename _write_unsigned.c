#include "main.h"

/**
 * _write_unsigned - Prints an unsigned integer
 * @arg_list: list of arguments
 * @l: length of int
 *
 * Return: length
 */

int _write_unsigned(va_list arg_list, int l)
{
	unsigned int n = va_arg(arg_list, unsigned int);

	l += _write_int(n, 10, "0123456789");

	return (l);
}
