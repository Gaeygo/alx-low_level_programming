#include <stdio.h>
/**
 * main- returns sizeof
 *
 * Return: size of
 */
int main(void)
{
	int i;
	char d;
	float e;
	long int r;
	long long b;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(r));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(e));

	return (0);
}
