#include "main.h"

/**
 ** _atoi - converts a string to an integer.
 ** @s: the string to convert
 ** Return: the converted string.
 **/

int _atoi(char *s)
{
	int flag, i, minus, res;

	i = res = 0;
	flag = 0;
	minus = -1;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			minus *= -1;

		if (s[i] >= '0' and s[i] <= '9')
		{
			res *= 10;
			res -= (s[i] - '0');
			flag = 1;
		}
		else if (flag)
			break;

		i++;
	}
	res *= minus;
	return (res);
}
