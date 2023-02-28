#include "main.h"

/**
 ** print_array - Print an array up to n.
 ** @a: the array of elements
 ** @n: the number of elements of the array *a
 ** Return: Nothing
 **/


void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
