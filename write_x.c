#include "main.h"

/**
 * write_x - takes an unsigned int and prints it in lowercase hex notation
 * @x: unsigned integer
 *
 * Return: numbers printed
 */

int write_x(va_list x)
{
	return (print_hex(va_arg(x, unsigned int), 0));
}
