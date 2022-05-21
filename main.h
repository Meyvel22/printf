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

int _printf(const char *format, ...);
unsigned int manage_buffer(char *b_pointer, char c, unsigned int b_index);
int _write_buffer(char *buffer, unsigned int bytes_size);
int _write_char(va_list arg_list, char *buffer, unsigned int b_index);
int _write_str(va_list arg_list, char *buffer, unsigned int b_index);
int _write_int(va_list arg_list, char *buffer, unsigned int b_index);
int _putchar(char c);
int _write_hex(va_list arg_list, int l);
int _write_heX(va_list arg_list, int l);
int _write_octal(va_list arg_list, int l);
unsigned int get_length(unsigned int n, int base);
int _write_numbers(unsigned long n, unsigned int base, const char *num);
int _write_b(va_list arg_list, int l);
int _write_binary(unsigned int n, int l);

#endif
