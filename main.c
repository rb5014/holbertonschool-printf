#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len, len2;
	int k = 255;
	len = _printf("%u", k);
	len2 = printf("%u", k);
	printf("\nlength [%d] [%d]\n", len, len2);

   return (0);
}
