#include "../main.h"
/**
 * manage_buffer - concatenates buffer characters
 * buffer: buffer pointer
 * c: character to concatenate
 * index_of_buffer: index of buffer pointer
 * Return: index of buffer pointer
 */

unsigned int manage_buffer(char *buffer_pointer, char c , unsigned int buffer_index)
{
    if (buffer_index == 1024)
    {
        _write_buffer(buffer_pointer, buffer_index);
        buffer_index = 0;
    }
    buffer_pointer[buffer_index] = c;
    buffer_pointer++;

    return buffer_index;
}
