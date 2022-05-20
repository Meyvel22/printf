#include "../main.h"
/**
 * _write_str: writes string to stdout
 * @arg_list: char input
 * @buffer: buffer pointer
 * @buffer_index: index for buffer pointer
 * Return: 1 on success.
 */
int _write_str(va_list arg_list, char *buffer, unsigned int buffer_index)
{
    char *str;
    unsigned int index;
    char null[] = "(null)";

    str = va_arg(arg_list, char *);

    if (str == NULL)
    {
        for (index = 0; null[index]; index++)
            buffer_index = manage_buffer(buffer, null[index], buffer_index);

        return  6;
    }
    for (index = 0; str[index]; index++)
        buffer_index = manage_buffer(buffer, str[index], buffer_index);
    return (index);
}
