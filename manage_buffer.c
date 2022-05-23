#include "main.h"

/**
 * manage_buffer - concatenates buffer characters
 * @buffer: buffer pointer
 * @c: character to concatenate
 * @b_index: index of buffer pointer
 * Return: index of buffer pointer
 */

unsigned int manage_buffer(char *buffer, char c, unsigned int b_index)
{
	if (b_index == 1024)
	{
		write_buffer(buffer, b_index);
		b_index = 0;
	}
	buffer[b_index] = c;
	buffer++;

	return (b_index);
}
