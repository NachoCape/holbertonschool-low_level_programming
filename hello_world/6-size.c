#include <stdio.h>
/**
 * main - This C program use puts to print
 * Return: devuelve 0
 */

int main(void)
{
	long int li;
	long long int lli;

	printf("Size of a char: %zu byte(s)\n", sizeof(charType));
	printf("Size of a int: %zu byte(s)\n", sizeof(intType));
	printf("Size of a long int: %zu byte(s)\n", sizeof(li));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(lli));
	printf("Size of a float: %ld byte(s)\n", sizeof(floatType));
return (0);
}
