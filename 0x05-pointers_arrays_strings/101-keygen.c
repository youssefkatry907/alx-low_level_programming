#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 ** main - generates a random password
 **
 ** Return: the generated password
 **/

int main(void)
{
	char ans;
	int pass;

	srand(time(0));
	while (pass <= 2645)
	{
		ans = rand() % 128;
		pass += ans;
		putchar(ans);
	}
	putchar(2772 - pass);
	return (0);
}
