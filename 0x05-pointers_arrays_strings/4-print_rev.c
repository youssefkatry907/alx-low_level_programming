#include "main.h"

/*
 *print_rev - Prints a string in reverse
 *@s: the string to be printed
 *Return: Nothing
 */

void print_rev(char *s)
{
	int idx = 0;

	while (s[idx] != '\0')
		idx++;

	--idx;

	 while (s[idx] != '\0')
		 _putchar(s[idx--]);

	 _putchar('\n');
}
