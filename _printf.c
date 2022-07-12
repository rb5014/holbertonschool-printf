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
	int i, j, nb_c = 0;

	conv k[] = {{'c', print_char}, {'s', print_string}, {'o', print_octal},
		    {'%', print_percent}, {'d', print_int}, {'i', print_int},
		    {'b', print_ui_to_b}, {'u', print_unsigned_int},
		    {'x', print_hexa_lower}, {'X', print_hexa_upper},
		    {'S', print_string_ascii}, {'p', print_pointer}, {0, 0}};
	/* Structure that store all specifier and the functions related*/


	if (format == NULL)
		return (-1); /* when format don't exit or point to NULL return -1 */
	va_start(ap, format);
	for (i = 0; format[i] != '\0'; i++) /* loop that browse char * format in*/
	{									/* order to check for specifier*/
		if (format[i] != '%') /* if the begining of specifier is not found */
		{					/* print all the character normally	*/
			nb_c += _putchar(format[i]);
			continue;
		}
		if (!(format[i + 1]))/* if format[i+1] doesn't exist return -1 */
			return (-1);
		for (j = 0; j < 13; j++)   /* format[i] = '%', the specifier is found */
		{
			if (format[i + 1] == k[j].spec) /* when format[i+1] is equal */
			{								/* to one of specifier as */
				nb_c += k[j].f(ap);			/* describes in conv k it */
				i++;						/* executes the function related.*/
				break;
			}
		}
		if (j < 13)			/* when no specifier is found in struct conv k */
			continue;		/* Print normally the next character */
		nb_c += _putchar(format[i]); /* without any thougt */
	}
	va_end(ap);
	return (nb_c); /* return the value of character or number printed */
					/* on screen */
}
