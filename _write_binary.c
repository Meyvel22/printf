#include "main.h"

/**
 * _write_b - checks if argument is unsigned
 * @arg_list: list of argument
 * @l: length of int
 * Return: l
 */

int _write_b(va_list arg_list, int l)
{
	unsigned int n;

	n = va_arg(arg_list, int);
	return (_write_binary(n, l));
}

/**
 * _write_binary - converts an unsigned int to binary
 * @n: unsigned int
 * @l: length of string
 * Return: l
 */

int _write_binary(unsigned int n, int l)
{
	if ((n / 2) == 0)
	{
		_putchar((n % 2) + 47);
		l += 
