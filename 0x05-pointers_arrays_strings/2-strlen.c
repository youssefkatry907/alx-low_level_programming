#include "main.h"

/**
 ** _strlen - Get the length of a string
 ** @s: The string
 ** Return: the length
 **/

int _strlen(char *s)
{
	int i, cnt;

	cnt = 0;

	for (i = 0; s[i] != '\0'; i++)
		++cnt;

	return (cnt);

}
