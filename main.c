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
   unsigned int k = 9889;
	len = _printf("%u", k);
	printf("length [%d]\n", len);

   return (0);
}
