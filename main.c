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
    int len;
    int len2;
    int k = -2147482625;
	len = _printf("%d\n", k);
	len2 = printf("%d\n", k);
	printf("length [%d, %d]\n", len, len2);

   return (0);
}
