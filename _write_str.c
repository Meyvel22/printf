#include "main.h"

/**
 * _write_str - prints a string
 * @arg_list: string to print
 * Return: number of chars printed
 */
int _write_str(va_list arg_list)
{
    int counter;
    char *str = va_arg(arg_list, char *);

    if(str == NULL)
        str = "NULL";

    for (counter = 0; str[counter]; counter++){
        _putchar(str[counter]);
    }
    return counter;
}
