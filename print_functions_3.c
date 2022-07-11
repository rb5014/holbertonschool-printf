#include "main.h"

/**
 * print_last_hexa_upper - cfr description
 * @n: input unsigned int
 * Description: print the conversion of integer in hexadecimal in uppercase
 * Return: It's a void function
 */

void print_last_hexa_upper(unsigned int n)
{
 	if (n / 16)
		print_last_hexa_upper(n / 16);

	if (n % 16 < 10)
		_putchar(n % 16 + '0');
	else
		_putchar((n % 16) - 10 + 'A');
}

/**
 * print_hexa_upper - cfr description
 * @ap: input va_list
 * Description: Print the conversion of an integer to hexadecimal in uppercase
 * Return: a number of char printed
 */

int print_hexa_upper(va_list ap)
{
	unsigned int j = va_arg(ap, unsigned int);
	int nb_c = 1;

	print_last_hexa_upper(j);
	while (j / 16)
	{
		nb_c++;
		j = j / 16;
	}
	return (nb_c);
}

/**
 * print_last_octal - cfr description
 * @n: input unsigned int
 * Description: print the conversion of integer to octal
 * Return: It's a void function
 */

void print_last_octal(unsigned int n)
{
	if (n / 8)
		print_last_octal(n / 8);
	_putchar(n % 8 + '0');
}

/**
 * print_octal - cfr description
 * @ap: input va_list
 * Description: Print the conversion of an integer to octal
 * Return: a number of char printed
 */

int print_octal(va_list ap)
{
	unsigned int j = va_arg(ap, unsigned int);
	int nb_c = 1;

	print_last_octal(j);
	while (j / 8)
	{
		nb_c++;
		j = j / 8;
	}
	return (nb_c);
}

void conv_hexa(char c)
{
	if (c > 0)
		conv_hexa(c / 16);
	if (c % 16 < 10)
		_putchar(c % 16 + '0');
	else
		_putchar(c % 16 - 10 + 'A');
}

int print_string_ascii(va_list ap)
{
        int j, nb_c = 0;
        char *s = va_arg(ap, char *);
        if (!(s))
                return (write(1, "(null)", 6));

        for (j = 0; s[j]; j++)
		if (s[j] > 0 && (s[j] < 32 || s[j] > 127))
		{
			nb_c += _putchar('\\');
			nb_c += _putchar('x');
			conv_hexa(s[j]);
			while (j / 16)
			{
				nb_c++;
				j = j / 16;
			}
		}
		else
			nb_c += _putchar(s[j]);
	return (nb_c);
}
