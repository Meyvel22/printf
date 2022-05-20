#include "main.h"

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
