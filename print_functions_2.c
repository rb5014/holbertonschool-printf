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
