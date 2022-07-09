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
    int k = 1356;
	len = _printf("%i\n", k);
	len2 = printf("%i", k);
	printf("length [%d, %d]\n", len, len2);

   return (0);
}
