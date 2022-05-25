#include "main.h"

/**
 * check_specifier - checks for specifier
 * @format: format specifier
 * @list: char to be printed
 * @x: format string iterator
 * @argument: va_list
 * Return: count
 */

int (*check_specifier(const char *format))(va_list argument)
{
	unsigned int x;
	type p[] = {
		{"c", print_c},
		{"s", print_s},
		{"i", print_i},
		{"d", print_d},
		{"b", print_b},
		{"u", print_u},
		{"o", print_o},
		{"x", print_x},
		{"X", print_X},
		{"S", print_S},
		{"p", print_p},
		{"r", print_r},
		{"R", print_R},
		{NULL, NULL}
	};

	for (x = 0; p[i].t_id != NULL; x++)
	{
		if (*(p[x].t_id) == *format)
			break;
	}

	return (p[x].func);
}
