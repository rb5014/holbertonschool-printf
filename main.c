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
	int k = 2050;
	len = _printf("%d", k);
	len2 = printf("\n%ddobi", k);
	printf("length [%d, %d]\n", len, len2);

   return (0);
}
