#include "../main.h"
/*
 * _write_char - writes the character c to stdout
 * @arg_list: char input
 * @buffer: buffer pointer
 * @buffer_index: buffer pointer index
 * return: 1 on success.
 */
int _write_char(va_list arg_list, char *buffer, unsigned int buffer_index)
{
    char c;

    c = va_arg(arg_list, int);
    manage_buffer(buffer, c, buffer_index);

    return 1;
}
