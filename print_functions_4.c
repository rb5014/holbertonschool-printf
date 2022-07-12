#include "main.h"

/**
 * conv_hexa_2dig - conv char to hexa
 * @c: char to conv
 * @count: flag to check for recursion
 *
 * Return: nothing(void)
 */
int conv_hexa_2dig(char c, int count)
{
	int nb_c = 0;

	if (c / 16)
	{
		count--;
		nb_c += conv_hexa_2dig(c / 16, count);
	}
	if (count == 2)
		nb_c += _putchar('0');
	if (c % 16 < 10)
		nb_c += _putchar(c % 16 + '0');
	else
		nb_c += _putchar(c % 16 - 10 + 'A');

	return (nb_c);
}

/**
 * print_string_ascii - print strings with non printable characters
 *
 * @ap: list of arguments from format
 *
 * Return: the nb of char printed
 */

int print_string_ascii(va_list ap)
{
	int j, nb_c = 0;
	char *s = va_arg(ap, char *);

	if (!(s))
		return (write(1, "(null)", 6));
	for (j = 0; s[j]; j++)
		if (s[j] > 0 && (s[j] < 32 || s[j] >= 127))
		{
			nb_c += _putchar('\\');
			nb_c += _putchar('x');
			nb_c += conv_hexa_2dig(s[j], 2);
		}
		else
			nb_c += _putchar(s[j]);
	return (nb_c);
}
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

	if (j == 0)
		return (write(1, "(nil)", 5));

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
