#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
int _putchar(char c);
int print_char(va_list ap);
int print_string(va_list ap);
int print_percent(va_list ap);
int _printf(const char *format, ...);
int print_int(va_list ap);
void print_last_digit(int n);
/**
 * struct convert - struct convert
 * @spec: the specifier
 * @f: the print function associates
 */

typedef struct convert
{
	char spec;
	int (*f)(va_list ap);
} conv;

#endif /* MAIN_H */
