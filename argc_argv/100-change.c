#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * change_recu - aux recursion function to count the min coins of change
 * @num: integer
 * @count: integer
 * Return: the minimum amount of coins
 */

int change_recu(int num, int count)
{
	int res= 0;

	if (num == 0)
		return count;
	if (num >= 25)
	{
		count = count + (num / 25);
		num = num % 25;
	} else if (num >= 10 && num < 25)
	{
		count = count + (num / 10);
		num = num % 10;
	} else if (num >= 5 && num < 10)
	{
		count = count + (num / 5);
		num = num % 5;
	} else if (num >= 2 && num < 5)
	{
		count = count + (num / 2);
		num = num % 2;
	} else if (num == 1)
	{
		count++;
		num--;
	}
	count = change_recu(num, count);
	return (count);
}

/**
 * main - prints the minimum number of coins to make
 * change for an amount of money
 * @argc: integer (the amount of arguments)
 * @argv: pointer to an array of pointers
 * Return: 0 if receive a correct num, otherwise 1
 */

int main(int argc, char *argv[])
{
	int num = 0, count = 0, res = 0;

	if (argc - 1 != 1)
	{
		printf("Error\n");
		return (1);
	} else 
	{
		num = atoi(argv[1]);
		if (num < 0)
			printf("0\n");
		else
		{
			res = change_recu(num, count);
			printf("%d\n", res);
		}
	}
	return (0);
}
