#include "main.h"

/**
 * write_buffer - write the character to stdout
 * @buffer: buffer pointer
 * @bytes_size: size or number of bytes to print
 * Return: On success 1, On error, -i is returned.
 */

int write_buffer(char *buffer, unsigned int bytes_size)
{
	return (write(1, buffer, bytes_size));
}
