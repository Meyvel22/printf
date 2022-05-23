#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include <limits.h>

/**
 * struct print - structure that contain flag and funtion
 * @t_id: character that identify the function
 * @func: pointer to the function
 */

typedef struct print
{
	char *t_id;
	int (*func)(va_list);
} type;

int _printf(const char *format, ...);
int _putchar(char c);

int _write_char(va_list c);
int _write_str(va_list arg_list);
static int (*check_specifies(const char *format))(va_list);


#endif
