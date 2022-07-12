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
void print_last_digit(unsigned int n);
void print_last_binary(unsigned int n);
int print_ui_to_b(va_list ap);
int print_unsigned_int(va_list ap);
int print_hexa_lower(va_list ap);
void print_last_hexa_digit(unsigned long int n);
int print_hexa_upper(va_list ap);
void print_last_hexa(unsigned int n);
int print_octal(va_list ap);
void print_last_octal(unsigned int n);
int conv_hexa_2dig(char c, int count);
int print_string_ascii(va_list ap);
int print_pointer(va_list ap);

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
