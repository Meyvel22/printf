/**
 * _write_buffer - write the character to stdout
 * @buffer: buffer pointer
 * @bytes_size: size or number of bytes to print
 * Return: On success 1
 * Return: On error, -i is returned.
 */

#include "main.h"

int _write_buffer(char *buffer, unsigned int bytes_size)
{
    return (write(1, buffer, bytes_size));
}
