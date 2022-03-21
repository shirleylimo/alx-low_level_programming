#include "main.h"

/**
 * puts2 - prints a string, followed by a new line,
 * @str: pointer to the string to print
 * Return: void
 */

void puts2(char *str)
{
	int i = 1;

	for (; *str != 0; str++)
	{
		if (i % 2 != 0)
		{
			_putchar(*str);
		}
		i++;
	}
	_putchar('\n');
}
