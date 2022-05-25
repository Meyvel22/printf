#include "main.h"

/**
 * print_ex - takes an unsigned int and prints it in lowercase hex notation
 * @x: unsigned integer
 *
 * Return: numbers printed
 */

int print_ex(va_list x)
{
	return (print_hex(va_arg(x, unsigned int), 0));
}
