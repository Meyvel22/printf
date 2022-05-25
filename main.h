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
int print_ch(va_list c);
int print_st(va_list s);
int print_in(va_list i);
int print_de(va_list d);
int print_bi(va_list b);
int print_un(va_list u);
int print_oc(va_list o);
int print_ex(va_list x);
int print_eX(va_list X);
int print_St(va_list S);
int print_p(va_list p);
int (*check_specifies(const char *format))(va_list);
int print_hex(unsigned int n, unsigned int c);
int hex_print(char c);
int print_r(va_list r);
int print_R(va_list R);

#endif
