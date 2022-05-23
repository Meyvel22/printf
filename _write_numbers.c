#include "main.h"

/**
  * write_int - Prints number to std output
  * @arg_list: List of arguments
  * @l: Length of string so far
  *
  * Return: The new length of the string
  */

int _write_int(va_list arg_list, int l)
{
	int n;

	n = va_arg(arg_list, int);

	l = _putchar_int(n, len);
	return (l);
}

/**
  * _putchar_int - prints integers
  * @n: Number
  * @l: Length of string so far
  *
  * Return: The new length of the string
  */
int _putchar_int(int n, int l)
{
	unsigned long num;

	if (n < 0)
	{
		l += _putchar('-');
		num = -(unsigned int)n;
	}
	else
	{
		num = n;
	}
	l += _write_numbers(num, 10, "0123456789");

	return (l);
}

/**
  * _write_numbers - Prints numbers according to the specified base
  * @n: Number to print
  * @base: The base to print.
  * @num: The digits found in this base
  *
  * Return: The length
  */

int _write_numbers(unsigned long n, unsigned int base, const char *num)
{
	if (n >= base)
		_write_numbers((n / base), base, num);
	_putchar(num[n % base]);
	return (get_length(n, base) + 1);
}

/**
  *get_length - count length of chars to be printed
  *@n: unsigned int;
  *@base: base of number
  *
  *Return: length;
  */
unsigned int get_length(unsigned int n, int base)
{
	unsigned int poll;

	poll = 0;
	while (n > 0)
	{
		n = n / base;
		if (n == 0)
			break;
		poll++;
	}
	return (poll);
}
