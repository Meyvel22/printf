#include "main.h"
/**
 * manage_buffer - concatenates buffer characters
 * b_pointer: buffer pointer
 * c: character to concatenate
 * b_index: index of buffer pointer
 * Return: index of buffer pointer
 */

unsigned int manage_buffer(char *b_pointer, char c , unsigned int b_index)
{
    if (b_index == 1024)
    {
        _write_buffer(b_pointer, b_index);
        b_index = 0;
    }
    b_pointer[b_index] = c;
    b_pointer++;

    return (b_index);
}
