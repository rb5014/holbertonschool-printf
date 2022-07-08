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
	int i, j, res = 0, nb_f = 0;
	conv k[] = {{'c', print_char}, {'s', print_string}};

	va_start(ap, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			continue;
		}
		for (j = 0; j < 2; j++)   /* format[i] = '%' */
		{
			if (format[i + 1] == k[j].spec)
			{
				res += k[j].f(ap);
				i++;
				nb_f++;
				break;
			}
		}
		if (j < 2)
			continue;
		if (format[i + 1] == '%')
		{
			_putchar('%');
			i++;
			nb_f++;
		}
		else
		{
			_printf("Error: no identifier detected \n");
			return (0);
		}
	}
	va_end(ap);
	res += (i - 1) - nb_f;
	return (res);
}
