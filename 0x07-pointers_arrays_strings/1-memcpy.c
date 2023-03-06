#include "main.h"

/**
 ** _strstr - locates a substring
 **
 ** @haystack: the longer string to search
 ** @needle: the first occurrence of the substring
 **
 ** Return: a pointer beg of substring or @Null if it not foound.
 **/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
