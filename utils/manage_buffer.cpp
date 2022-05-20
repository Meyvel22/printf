//
// Created by Muhyideen Elias on 19/05/2022.
//

#include "../main.h"

/**
 * manage_buffer - concatenates buffer characters
 * buffer: buffer pointer
 * c: character to concatenate
 * index_of_buffer: index of buffer pointer
 * Return: index of buffer pointer
 */

unsigned int manage_buffer(char *buffer_pointer, char c , unsigned int index_of_pointer)
{
    if (index_of_pointer == 1024)
    {
        _print_buffer(buffer_pointer, index_of_pointer)
        index_of_buffer = 0;
    }
    buffer_pointer[index_of_pointer] = c;
    buffer_pointer++;

    return buffer_pointer;
}
