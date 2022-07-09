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
	int k = 255;
	len = _printf("%x", k);
	printf("\nlength [%d]\n", len);

   return (0);
}
