//
// Created by Muhyideen Elias on 19/05/2022.
//

/**
 * _putchar - write the character to stdout
 * @c: The character to print
 *
 * Return: On success 1
 * Return: On error, -i is returned.
 */

#include "../main.h"

int _putchar(char c)
{
    return (write(1, &c, 1));
}
