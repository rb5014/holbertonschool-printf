#include "main.h"

/**
 * print_last_binary - cfr description
 * @n: input unsigned int
 * Description: print the conversion of integer in binary
 * Return: It's a void function
 */

void print_last_binary(unsigned int n)
{
	if (n / 2)
		print_last_binary(n / 2);
	_putchar(n % 2 + '0');
}

/**
 * print_ui_to_b - cfr description
 * @ap: input va_list
 * Description: Print the conversion of an integer to binary
 * Return: a number of binary number printed
 */

int print_ui_to_b(va_list ap)
{
	unsigned int j = va_arg(ap, unsigned int);
	int nb_c = 1;

	print_last_binary(j);
	while (j / 2)
	{
		nb_c++;
		j = j / 2;
	}
	return (nb_c);
}

/**
 * print_unsigned_int - cfr description
 * @ap: input va_list
 * Description: Print an unsigned int
 * Return: a number of unsigned int number printed
 */

int print_unsigned_int(va_list ap)
{
	unsigned int j = va_arg(ap, unsigned int);
	int nb_c = 1;

	print_last_digit(j);
	while (j / 10)
	{
		nb_c++;
		j = j / 10;
	}
	return (nb_c);
}

/**
 * print_last_hexa_digit - cfr description
 * @n: input integer
 * Description: Print the conversion of a int in hexadecimal in lower case
 * recursively
 * Return: it's void function
 */

void print_last_hexa_digit(int n)
{
	int j;

	if (n / 16)
		print_last_hexa_digit(n / 16);
	j = n % 16;
	if (j < 10)
		_putchar(n % 16 + '0');
	else
		_putchar(n % 16 - 10 + 'a');
}

/**
 * print_hexa_lower - cfr description
 * @ap: input va_list
 * Description: Print the conversion of a int in hexadecimal in lower case
 * Return: a number of a hexadecimal printed
 */

int print_hexa_lower(va_list ap)
{
	int j = va_arg(ap, int);
	int nb_c = 1;

	print_last_hexa_digit(j);
	while (j / 16)
	{
		nb_c++;
		j = j / 16;
	}
	return (nb_c);
}
