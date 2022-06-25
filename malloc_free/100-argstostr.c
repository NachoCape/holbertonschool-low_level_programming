#include "main.h"
#include <stdlib.h>
#include "2-strlen.c"
#include <stdio.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: integer (argc)
 * @av: pointer to an array of pointers (argv)
 * Return: Returns NULL if ac == 0 or av == NULL
 * returns a pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	char *res = NULL;
	int i = 0, sum_len = 0, aux_ac = 0, len = 0, j = 0;

	if (ac != 0 && av != NULL)
		for (; aux_ac < ac; aux_ac++)
			sum_len = sum_len + _strlen(av[aux_ac]);
	if (ac != 0 && av != NULL)
		res = malloc(sum_len + ac + 1);
	if (res != NULL)
	{
		for (; i < ac; i++)
		{
			for (j = 0; j < av[i][j]; j++, len++)
			{
				/**printf("len = %d\n", len);
				 * printf("av[i][j] = %c\n", av[i][j]);*/
				res[len] = av[i][j];
				/*printf("res[len] = %c\n", res[len]);*/
			}
			res[len++] = '\n';
			/**printf("res en 6 = %c\n", res[len]);
			 * printf("strlen(av[i] = %d\nlen = %d\n",
			 * _strlen(av[i]), len);*/
		}
		res[len] = '\0';
		/*printf("%s\n", res);*/
	}
	return (res);
}
