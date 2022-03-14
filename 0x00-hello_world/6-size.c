#include <stdio.h>
/**
 * main- returns sizeof
 *
 * Return: size of
 */
int main (void)
{
	int i;
	char d;
	float e;
	long int r;
	long long b;

	printf("Size of a char: %lu.\n", (unsigned long)sizeof(d));
	printf("Size of an int: %lu.\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu.\n", (unsigned long)sizeof(r));
	printf("Size of a long long int: %lu.\n", (unsigned long)sizeof(b));
	printf("Size of a float: %lu.\n",(unsigned long)sizeof(e));

	return 0;
}
