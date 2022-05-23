#include "main.h"

/**
  * _write_ch - Prints a char to std output
  * @arg_list: List of arguments
  * @l: Length of string so far
  *
  * Return: len
  */
int _write_ch(va_list arg_list, int l)
{
	char c = va_arg(arg_list, int);

	l += _putchar(c);
	return (l);
}


/**
  * _write_str - Prints a string to std output
  * @arg_list: List of arguments
  * @l: Length of string so far
  *
  * Return: The new length of the string
  */
int _write_str(va_list arg_list, int l)
{
	const char *str = va_arg(arg_list, const char *);

	if (str == NULL)
		str = "(null)";
	while (*str)
		l += _putchar(*str++);

	return (l);
}
