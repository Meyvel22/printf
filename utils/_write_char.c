//
// Created by Muhyideen Elias on 19/05/2022.
//

#include "../main.h"


int _write_char(va_list arg_list, char *buffer, unsigned int buffer_index)
{
    char c;

    c = va_arg(arg_list, int);
    manage_buffer(buffer, c, buffer_index);

    return 1;
}
