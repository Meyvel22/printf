#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>


/**
 * struct print - structure that contains flag and function
 * @t_id: character that identifies the function
 * @func: pointer to the function
 */

typedef struct print
{
	char *t_id;
	int (*func)(va_list);
} type;


int _printf(const char *format, ...);
int _putchar(char c);
int write_c(va_list c);
int write_s(va_list s);
int write_i(va_list i);
int write_d(va_list d);
int write_b(va_list b);
int write_u(va_list u);
int write_o(va_list o);
int write_x(va_list x);
int write_X(va_list X);
int write_S(va_list S);
int write_p(va_list p);
int (*check_specifies(const char *format))(va_list);
int write_hex(unsigned int n, unsigned int c);
int hex_write(char c);
int write_r(va_list r);
int write_R(va_list R);

#endif
