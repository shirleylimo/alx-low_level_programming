#include "main.h"

/**
 * print_most_numbers - Print num from 0 ot 9 followed by new line
 *
 * Return: Void
 */

void print_most_numbers(void)
{
	int i = 48;

	while (i < 58)
	{
		if (i != 50 && i != 52)
		{
			_putchar(i);
		}
		i++;
	}
	_putchar('\n');
}
