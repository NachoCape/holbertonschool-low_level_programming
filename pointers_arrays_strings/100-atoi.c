#include "main.h"
#include <stdio.h>

/**
 * expo - calculate how many times 10 wanna be multiplied by himself
 * @count: numbers of times to multiplie 10
 * Return: 10 ^ count
 */

int expo(int count)
{
	int res, k;

	res = 1;
	for (k = 1; k < count; k++)
		res = res * 10;
	return (res);
}

/**
 * _atoi - convert a string to an integer
 * @s: string of char
 *
 * Description: The number in the string can be preceded by
 * an infinite number of characters
 * You need to take into account all the - and + signs before the number
 * If there are no numbers in the string, the function must return 0
 * You are not allowed to use long
 * You are not allowed to declare new variables of “type” array
 * You are not allowed to hard-code special values
 * We will use the -fsanitize=signed-integer-overflow
 * gcc flag to compile your code.
 *
 * Return: a int
 */
int _atoi(char *s)
{
	int i = 0, j = 0, exp = 0, aux = 0, flag = 0, res = 0;
	int count_neg = 0, count_pos = 0;

	/**Last occurrence of '-' or '+'*/
	while (s[i] != '\0' && flag == 0)
	{
		if (s[i] == '+')
			count_pos++;
		if (s[i] == '-')
			count_neg++;
		if (s[i] >= '0' && s[i] <= '9')
		{
			flag = 1;
			i--;
		}
		i++;
	}
	/**count the amount of digits*/
	while (s[i] != '\0' && (s[i] >= '0' && s[i] <= '9'))
	{
		aux++;
		i++;
	}
	/**acumulate in res the number to return*/
	for (j = i - aux; j < i; j++)
	{
		exp = expo(aux);
		res = res + (s[j] - 48) * exp;
		aux--;
	}
	if (count_neg > count_pos)
		res = res * -1;
	return (res);
}