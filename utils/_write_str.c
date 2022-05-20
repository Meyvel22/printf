//
// Created by Muhyideen Elias on 20/05/2022.
//

#include "../main.h"

int _write_str(va_list arg_list, char *buffer, unsigned int buffer_index)
{
    char *str;
    unsigned int index = 0;
    char null[] = "(null)";

    str = var_arg(arg_list, char *);

    if (str == NULL)
    {
        for (; null[index]; i++)
            buffer_index = manage_buffer(buffer, null[index], buffer_index);

        return  6;
    }
    for (count = 0; str[index], index++)
        buffer_index = manage_buffer(buffer, str[index], buffer_index);
    return (i);
}
