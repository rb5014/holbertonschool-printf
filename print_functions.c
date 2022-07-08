#include "main.h"

/**
 * print_char - cfr description
 * @ap: input list of args
 * description: print a character
 * Return: a number of a character printed
 */

int print_char(va_list ap)
{
	char c = (char) va_arg(ap, int);

	_putchar(c);
	return (1);
}

/**
 * print_string - cfr description
 * @ap: input list of args
 * description: print a string
 * Return: a number of a character printed
 */

int print_string(va_list ap)
{
	int j;
	char *s = va_arg(ap, char *);

	for (j = 0; s[j]; j++)
	{
		_putchar(s[j]);
	}
	return (j - 1);
}
