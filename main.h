#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include <limits.h>

int _printf(const char * const format, ...);
unsigned int manage_buffer(char *buffer_pointer, char c , unsigned int buffer_index);
int _write_buffer(char *buffer, unsigned int bytes_size);
int _write_char(va_list arg_list, char *buffer, unsigned int buffer_index);
int _write_str(va_list arg_list, char *buffer, unsigned int buffer_index);
int _write_int(va_list arg_list, char *buffer, unsigned int buffer_index);

#endif
