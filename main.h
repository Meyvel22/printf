#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include <limits.h>

/**
 * struct format - structure that contain flag and funtion
 * @iden: character that identify the function
 * @func: pointer to the function
 */

typedef struct format
{
	char *iden;
	int (*func)(va_list, int);
} form;

int _putchar(char c);
int _printf(const char * const format, ...);
int _write_char(va_list arg_list, char *buffer, unsigned int buffer_index);
int _write_str(va_list arg_list, char *buffer, unsigned int buffer_ index);
int _write_int(va_list arg_list, char *buffer, unsigned int buffer_index);
int _write_unsigned(va_list arg_list, unsigned int l);
int _write_octal(va_list arg_list, int l);
int _write_hex(va_list arg_list, int l);
int _write_rot13(va_list arg_list, int l);
int _write_b(va_list arg_list, int l);
int _write_Str(va_list arg_list, int l);
int _write_heX(va_list arg_list, int l);
int (*_choose_func(char c))(va_list);
int _write_buffer(char *buffer, unsigned int bytes_size);
unsigned int manage_buffer(char *buffer_pointer, char c, unsigned int b_index);

#endif
