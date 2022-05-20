#include "main.h"

/**
 * *choose_func - returns pointer to the function
 * @c: character
 *
 * Return: pointer to function or NULL
 */

int (*choose_func(char c))(va_list, int)
{
	form specifics[] = {
		{'c', _write_char},
		{'s', _write_str},
		{'d', _write_int},
		{'i', _write_int},
		{'u', _write_unsigned},
		{'o', _write_octal},
		{'x', _write_hex},
		{'X', _write_heX},
		{'R', _write_rot13},
		{'b', _write_b},
		{'S', _write_Str}
	};

	int x;

	for (x = 0; specifics[x].iden; x++)
	{
		if (c == specifics[x].iden)
		{
			return (specifics[x].func);
		}
	}

	return (NULL);
}
