#include "3-calc.h"
#include <stdio.h>

/**
 * main - performs simple operations
 * @argc: numbers of arguments
 * @argv: pointer to an array of pointers
 *
 * Description: You can assume num1 and num2 are integers, so use the atoi
 * function to convert them from the string input to int
 * operator is one of the following:
 * +: addition
 * -: subtraction
 * *: multiplication
 * /: division
 * %: modulo
 * The program prints the result of the operation, followed by a new line
 * You can assume that the result of all operations can be stored in an int
 * if the number of arguments is wrong, print Error, followed by a
 * new line, and exit with the status 98
 * if the operator is none of the above, print Error, followed by a
 * new line, and exit with the status 99
 * if the user tries to divide (/ or %) by 0, print Error, followed by a
 * new line, and exit with the status 100
 *
 * Return: always 0 (prints the result of the operation)
 */

int main(int argc, char *argv[])
{
	int num1 = 0, num2 = 0;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL || strlen(argv[2]) > 1)
	{
		printf("Error\n");
		exit(99);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	f = get_op_func(argv[2]);
	printf("%d\n", (*f)(num1, num2));
	return (0);
}
