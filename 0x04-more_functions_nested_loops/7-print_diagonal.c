#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times \ should be printed
 * Return: no return
 */

void print_diagonal(int n)
{
	int i = 0, s = 0;

	if (n > 0)
	{
		while (i < n)
		{
			while (s < i)
			{
				_putchar(' ');
				s++;
			}

			_putchar('\\');
			_putchar('\n');
			s = 0;
			i++;
		}
	} else
	{
		_putchar('\n');
	}
}
