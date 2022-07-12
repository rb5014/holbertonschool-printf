#include "main.h"

int main() 
{
	int nb_c = 25, len, len_a, len1, len2;
	int *p = &nb_c;

	len = printf("\n %d", nb_c);
	len_a = printf("\n %p", p);
	len1 = _printf("\n %d", *p );
	len2 = _printf("\n %p", &nb_c);

	printf("\nlength [%d, %d]", len, len1);
	printf("\nlength [%d, %d]\n", len_a, len2);
	return (0);

}
