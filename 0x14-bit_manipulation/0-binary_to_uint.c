#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to a string
 *
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int number = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		number <<= 1;
		if (b[i] == '1')
			number += 1;
	}
	return (number);
}
