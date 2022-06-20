#include "main.h"
#include <stdio.h>

/**
 * cd - count the amount of digits
 * @res: integer
 * Return: the amount of digits of res
 */

int cd(int res)
{
	int i = 1;

	while (res % 10 != res)
	{
		res = res / 10;
		i++;
	}
	return (i);
}

/**
 * sl - count the large of a string
 * @n1: string of chars
 * Return: the large of the string n1
 */

int sl(char *n1)
{
	int res = 0;

	for (; n1[res] != '\0'; res++)
		;
	return (res);
}

/**
 * full - full the array r with chars of array n
 * @n: string of chars
 * @r: string of chars to be full
 * @l: integer, large of the string n
 * @aux: integer, aux is if the sum of the last 2 digits was higher to 9
 * @size_r: the size of the buffer
 * Return: a pointer to r with the result updated
 */

char *full(char *n, char *r, int l, int aux, int size_r)
{
	int res;

	while (l >= 0 && size_r >= 0)
	{
		if (aux != 0)
			res = aux + (n[l] - 48);
		else
			res = n[l] - 48;
		aux = 0;
		if ((cd(res) < 2) && (size_r >= 1))
			r[size_r] = res + '0';
		else if ((cd(res) == 2) && (size_r >= 1))
		{
			r[size_r] = res % 10 + '0';
			aux = res / 10;
		}
		size_r--;
		l--;
	}
	if (aux != 0 && size_r > 1)
	{
		r[size_r] = aux + '0';
		r = &r[size_r];
	} else if (aux != 0 && size_r == 1)
		r = 0;
	else if (size_r == 1 && l > -1)
		r = 0;
	else if (size_r >= 1 && l == -1 && aux == 0)
		r = &r[size_r + 1];
	return (r);
}

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int l1 = sl(n1) - 1, l2 = sl(n2) - 1, res = 0, aux = 0;

	if (l1 >= size_r - 1 || l2 >= size_r - 1)
		return (0);
	while (l1 >= 0 && l2 >= 0 && size_r >= 0)
	{
		res = ((n1[l1] - 48) + (n2[l2] - 48));
		if (aux != 0)
			res = res + aux;
		aux = 0;
		if (cd(res) < 2 && size_r >= 1)
			r[size_r] = res + '0';
		else if (cd(res) == 2 && size_r > 1)
		{
			r[size_r] = res % 10 + '0';
			aux = res / 10;
		}
		l1--;
		l2--;
		size_r--;
	}
	if (l1 > -1 && size_r >= 1)
		r = full(n1, r, l1, aux, size_r);
	else if (l2 > -1 && size_r >= 1)
		r = full(n2, r, l2, aux, size_r);
	else if (size_r == 1 && aux != 0)
		return (0);
	else if (size_r >= 1 && aux == 0)
		r = &r[size_r + 1];
	else if (size_r >= 0 && aux != 0)
	{
		r[size_r] = aux + '0';
		r = &r[size_r];
	}
	return (r);
}
