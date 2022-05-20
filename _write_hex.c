#include "main.h"

/**
  * _write_hex - Prints hex notation of a number
  * @arg_list: List of arguments
  * @l: length of string
  *
  * Return: The length
  */

int _write_hex(va_list arg_list, int l)
{
	unsigned int n = va_arg(arg_list, unsigned int);

	l += _write_numbers(n, 16, "0123456789abcdef");

	return (l);
}

/**
  * _write_heX - Prints heX
  * @arg_list: Argument list
  * @l: length of string
  *
  * Return: Length
  */

int _write_heX(va_list arg_list, int l)
{
	unsigned int n = va_arg(arg_list, unsigned int);

	l += _write_numbers(n, 16, "0123456789ABCDEF");
	return (l);
}
