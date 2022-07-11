#include "main.h"

/**
 * conv_hexa - conv char to hexa
 * @c: char to conv
 *
 * Return: nothing(void)
 */
void conv_hexa(char c)
{
	if (c > 0)
		conv_hexa(c / 16);
	if (c % 16 < 10)
		_putchar(c % 16 + '0');
	else
		_putchar(c % 16 - 10 + 'A');
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
