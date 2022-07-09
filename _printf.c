#include "main.h"

/**
 * _printf - print strings in argument with variables
 *
 * @format: string passed as argument
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list ap;
	int i, j, nb_c;
	conv k[] = {{'c', print_char}, {'s', print_string},
		    {'%', print_percent}, {'d', print_int}, {'i', print_int},
		    {'b', print_ui_to_b}, {'u', print_unsigned_int},
			{'x', print_hexadecimal_lower_case}, {0, 0}};

	if (format == NULL)
		return (-1);
	va_start(ap, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			nb_c += _putchar(format[i]);
			continue;
		}
		if (!(format[i + 1]))
			return (-1);
		for (j = 0; j < 9; j++)   /* format[i] = '%' */
		{
			if (format[i + 1] == k[j].spec)
			{
				nb_c += k[j].f(ap);
				i++;
				break;
			}
		}
		if (j < 9)
			continue;
		nb_c += _putchar(format[i]);
	}
	va_end(ap);
	return (nb_c);
}
