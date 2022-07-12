#include "main.h"

/**
 * print_pointer - cfr description
 * @ap: va_list
 * description: Specifier adapted for pointer or adress
 * Return: number of hexadecimal value of adress printed
 */

int print_pointer(va_list ap)
{
	int i = 1, nb_c = 0;
	unsigned long int j = va_arg(ap, unsigned long int);

	nb_c += _putchar('0');
	nb_c += _putchar('x');

	print_last_hexa_digit(j);
	while (j / 16)
	{
		i++;
		j = j / 16;
	}
	nb_c += i;

	return (nb_c);
}
