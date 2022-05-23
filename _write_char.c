#include "main.h"
/**
 * _write_char - writes the character c to stdout
 * @arg_list: char input
 * @buffer: buffer pointer
 * @b_index: buffer pointer index
 * Return: 1 on success.
 */
int _write_char(va_list arg_list, char *buffer, unsigned int b_index)
{
	char c;

	c = va_arg(arg_list, int);
	manage_buffer(buffer, c, b_index);
	return (1);
}
