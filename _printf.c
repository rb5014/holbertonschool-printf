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
	conv k[] = {{'c', print_char}, {'s', print_string}};

	va_start(ap, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			nb_c += _putchar(format[i]);
			continue;
		}
		for (j = 0; j < 2; j++)   /* format[i] = '%' */
		{
			if (format[i + 1] == k[j].spec)
			{
				nb_c += k[j].f(ap);
				i++;
				break;
			}
		}
		if (j < 2)
			continue;
		if (format[i + 1] == '%')
		{
			nb_c += _putchar('%');
			i++;
		}
/*		else
		{
			_printf("Error: no identifier detected \n");
			return (0);
		}
*/
		}


	va_end(ap);
	return (nb_c);
}
