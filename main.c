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
	char *str = "When you invoke GCC , it normally does preprocessing, compilation, assembly and linking. The \"overall options\" allow you to stop this process at an intermediate stage. For example, the -c option says not to run the linker. Then the output consists of object files output by the assembler.\n\nOther options are passed on to one stage of processing. Some options control the preprocessor and others the compiler itself. Yet other options control the assembler and linker; most of these are not documented here, since you rarely need to use any of them.\n\nMost of the command line options that you can use with GCC are useful for C programs; when an option is only useful with another language (usually C ++ ), the explanation says so explicitly. If the description for a particular option does not mention a source language, you can use that option with all supported languages.\n\nThe gcc program accepts options and file names as operands. Many options have multi-letter names; therefore multiple single-letter options may not be grouped: -dv is very different from -d -v.\n\nYou can mix options and other arguments. For the most part, the order you use doesn't matter. Order does matter when you use several options of the same kind; for example, if you specify -L more than once, the directories are searched in the order specified. Also, the placement of the -l option is significant.\n\nMany options have long names starting with -f or with -W---for example, -fmove-loop-invariants, -Wformat and so on. Most of these have both positive and negative forms; the negative form of -ffoo would be -fno-foo. This manual documents only one of these two forms, whichever one is not the default.\n";

	len = _printf("1man gcc:\n%s", str);
	len2 = printf("man gcc:\n%s", str);
	printf("\n%d %d \n\n", len, len2);
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	return (0);
}
/**    int len;
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

	len = _printf("Could you print some non-prntable characters?\n%S\nThanks!\n", "Sure:\x1F\x7F\n");
	len2 = printf("Could you print some non-prntable characters?\nSure:\\x1F\\x7F\\x0A\nThanks!\n");	
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
*/
