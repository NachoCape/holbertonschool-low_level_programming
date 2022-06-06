#include <stdio.h>
/**
 * main - This C program prints the size of various types
 * Return: devuelve 0
 */

int main(void)
{
	int i;
	char c;
	float f;
	long int li;
	long long int lli;

	printf("Size of a char: %zu byte(s)\n", sizeof(c));
	printf("Size of a int: %zu byte(s)\n", sizeof(i));
	printf("Size of a long int: %zu byte(s)\n", sizeof(li));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(lli));
	printf("Size of a float: %ld byte(s)\n", sizeof(f));
return (0);
}
