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

	len = _printf("%S", "No special character.");
	len2 = printf("No special character.");
	printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);

	len = _printf("%S", "\n");
	len2 = printf("\\x0A");
	printf("Len:[%d]\n", len);
        printf("Len:[%d]\n", len2);

	len = _printf("%S", "\x01\x02\x03\x04\x05\x06\x07");
	len2 = printf("\\x01\\x02\\x03\\x04\\x05\\x06\\x07");
	printf("Len:[%d]\n", len);
        printf("Len:[%d]\n", len2);

	len = _printf("Could you print some non-prntable characters?\n%S\nThanks!\n", "Sure:\x1B\x7F\n");
	len2 = printf("Could you print some non-prntable characters?\nSure:\\x1F\\x7B\\x0A\nThanks!\n");	
	printf("Len:[%d]\n", len);
        printf("Len:[%d]\n", len2);

	len = _printf("");
	len2 = printf("");
	printf("Len:[%d]\n", len);
        printf("Len:[%d]\n", len2);

	len = _printf("- What did you say?\n- %S\n- That's what I thought.\n", "");
	len2 = printf("- What did you say?\n- %s\n- That's what I thought.\n", "");
	printf("Len:[%d]\n", len);
        printf("Len:[%d]\n", len2);

	return (0);
}
