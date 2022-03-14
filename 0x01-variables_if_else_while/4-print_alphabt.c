#include <stdio.h>

/**
 * main - EWntry point
 * Return: 0
 */

int main(void)
{
	int a;

	a = 'a';

	while (a <= 'z')
	{
		if (a == 'q' || a == 'e')
		{
			a++;
		} else
		{
			putchar(a);
			a++;
		}
	}

	putchar('\n');

	return (0);
}
