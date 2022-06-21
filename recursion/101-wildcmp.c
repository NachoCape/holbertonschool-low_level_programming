#include "main.h"
#include <stdio.h>

/**
 * wildcmp_recu - aux recursion function for wildcmp
 * @s1: string of char
 * @s2: string of char
 * @flag: integer
 * Return: 1 if the strings are equals, otherwise 0
 */

int wildcmp_recu(char *s1, char *s2, int flag, int cond)
{
	int res = 0;
	if ((s2[0] != '*') && (s2[0] != '\0'))
		cond = 0;
	if (s2[0] == '*')
	{
		s2++;
		flag = 1;
	} else if ((flag == 1) && (s1[0] != '\0') && (s2[0] == '\0'))
	{
		if (cond == 1)
			return (1);
		else
			return (0);
	}
	else if ((flag == 1) && (s1[0] != '\0') && (s1[0] != s2[0]))
		s1++;
	else if ((s1[0] != '\0') && (s2[0] != '\0') && (s1[0] == s2[0]))
	{
		s1++;
		s2++;
	} else if ((s1[0] == '\0') && (s2[0] == '*'))
		s2++;
	else if ((flag == 0) && (s1[0] != '\0') && (s1[0] != s2[0]))
		return (0);
	else if ((s1[0] == '\0') && (s2[0] != '\0'))
		return (0);
	else if ((s1[0] != '\0') && ( s2[0] == '\0'))
		return (0);
	else if ((s1[0] == '\0') && (s2[0] == '\0'))
		return (1);
	res = (wildcmp_recu(s1, s2, flag, cond));
	return res;
}












/**	printf("%c  %c\n", *s1, *s2);
		if ((s2[0] != '\0') && (s2[0] == '*'))
	{
		s2++;
		flag = 1;
	 	res = wildcmp_recu(s1, s2, flag);
	}
		if ((flag == 1) && (s1[0] != '\0') && (s1[0] != s2[0]))
	{
		s1++;
		res = wildcmp_recu(s1, s2, flag);
	}
		if ((flag == 0) && (s1[0] != '\0') && (s1[0] != s2[0]))
		return (0);
		if ((s1[0] != '\0') && (s2[0] != '\0') && (s1[0] == s2[0]))
	{
		s1++;
		s2++;
		res = wildcmp_recu(s1, s2, flag);
	}
	if ((s1[0] == '\0') && (s2[0] == '\0'))
		return (1);
	if ((s1[0] == '\0') && (s2[0] == '*'))
	{
		s2++;
		res = wildcmp_recu(s1, s2, flag);
	}
	if (((s1[0] == '\0') && (s2[0] != '\0')) || ((s1[0] != '\0') && (s2[0] == '\0')))
		return (0);
	res = wildcmp_recu(s1, s2, flag);
	return (res);

}*/

/**
 * wildcmp - compares two strings
 * @s1: string of char
 * @s2: string of char
 * Description: s2 can contain the special character *.
 * The special char * can replace any string (including an empty string)
 *
 * Return: 1 if the strings can be considered identical, otherwise return 0
 */

int wildcmp(char *s1, char *s2)
{
	int flag = 0, cond = 1;

	return (wildcmp_recu(s1, s2, flag, cond));
}
