#include "main.h"

/**
 * print_char - cfr description
 * @ap: input list of args
 * Description: print a character
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
 * Description: print a string
 * Return: a number of a character printed
 */

int print_string(va_list ap)
{
	int j;
	char *s = va_arg(ap, char *);
	char buffer[1024];

	if (!(s))
		return (write(1, "(null)", 6));

	for (j = 0; s[j]; j++)
		buffer[j] = s[j];

			return (write(1, &buffer, j - 1));

}

/**
 * print_percent - cfr description
 * @ap: input list of args
 * Description: print the percent character
 * Return: a number of a character printed
 */

int print_percent(va_list ap)
{
	int nb_c = 0;

	(void) ap;
	nb_c += _putchar('%');
	return (nb_c);
}

/**
 * print_last_digit - cfr description
 * @n: input integer
 * Description: print the last digit of a number recursively
 * Return: it's a void function
 */

void print_last_digit(unsigned int n)
{
	if (n / 10)
		print_last_digit(n / 10);
	 _putchar(n % 10 + '0');
}

/**
 * print_int - cfr description
 * @ap: input list of args
 * Description: print an integer
 * Return: a number of a integer printed
 */

int print_int(va_list ap)
{

	int j = va_arg(ap, int), nb_c = 1;
	unsigned int n = j;

	if (j < 0)
	{
		nb_c += _putchar('-');
		n = -n;
	}
	print_last_digit(n);
	while (n / 10)
	{
		nb_c++;
		n = n / 10;
	}
	return (nb_c);

}

