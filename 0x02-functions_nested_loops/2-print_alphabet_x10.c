#include "main.h"

/*
 *print all letters from a to z x10 times 
*/ 

void print_alphabet_x10(void)
{
	int idx = 0;
	while(idx++ <= 9)
	{
		for(char c = 'a'; c <= 'z'; ++c)
			_putchar(c);
		_putchar('\n');
	}
}
