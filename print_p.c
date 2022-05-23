#include "main.h"
#include <stdio.h>

/**
 * print_p - writes the character c to stdout
 * @a: input char
 * @buffer: buffer pointer
 * @buffer_index: index for buffer pointer
 * Return: On success 1.
 */
int _print_p(va_list a __attribute__((unused)), char *b_pointer, unsigned int b_index)
{
    manage_buffer(b_pointer, '%', b_index);

    return (1);
}

