#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include <limits.h>

int _putchar(char c);
int _printf(const char * const format, ...);
int _write_char(va_list arglist);
int _write_str(va_list arglist);
int _write_int(va_list arglist);

#endif
