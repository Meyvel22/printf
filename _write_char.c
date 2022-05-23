#include "main.h"
/*
 * _write_char - writes the character c to stdout
 * @arg_list: char input
 * return: 1 always
 */
int _write_char(va_list arg_list)
{
    char c = (char) va_arg(arg_list, int);

    _putchar(c);

    return 1;
}
