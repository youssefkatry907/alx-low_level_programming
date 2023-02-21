#include "main.h"

/**
 ** print_last_digit - Prints the last digit of a number.
 ** @n: The number in question.
 **
 ** Return: Value of the last digit.
 **/
int print_last_digit(int n)
{
	int d = n % 10;

	if (d < 0) 
		d *= -1;

	_putchar(d + '0');

	return (d);
}
