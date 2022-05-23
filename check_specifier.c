#include "main.h"

/**
 * check_specifies - checks if there is a valid format specifier
 * @format:  format specifier
 * Return: pointer to valid function or NULL
 */

static int (*check_specifies(const char *format))(va_list)
{
	unsigned int index;
	type t[] = {
		{"c", _write_char},
		{"s", _write_str},
	};

	for (index = 0; t[index].t_id != NULL; index++)
	{
		if (*(t[index].t_id) == *format)
		{
			break;
		}
	}
	return (t[index].func);
}
