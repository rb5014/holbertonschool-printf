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
	int nb_c = 0;

	nb_c += _putchar(c);
	return (nb_c);
}

/**
 * print_string - cfr description
 * @ap: input list of args
 * description: print a string
 * Return: a number of a character printed
 */

int print_string(va_list ap)
{
	int j, nb_c = 0;
	char *s = va_arg(ap, char *);

	if (!(s))
	{
		nb_c += _putchar('(');
		nb_c += _putchar('n');
		nb_c += _putchar('u');
		nb_c += _putchar('l');
		nb_c += _putchar('l');
		nb_c += _putchar(')');
		return (nb_c);
	}
	for (j = 0; s[j]; j++)
	{
		nb_c += _putchar(s[j]);
	}
	return (nb_c);
}

/**
 * print_percent - cfr description
 * @ap: input list of args
 * description: print the percent character
 * Return: a number of a character printed
 */

int print_percent(va_list ap)
{
	int nb_c = 0;

	(void) ap;
	nb_c += _putchar('%');
	return (nb_c);
}
