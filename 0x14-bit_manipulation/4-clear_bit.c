#include "main.h"
/**
 * clear_bit -  sets the value of a bit to 0 at a given index.
 * @n: address of the integer
 * @index: index to the bit.
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int clearb = 1;

	if (index > (sizeof(*n) * 8) - 1)
	{
		return (-1);
	}
	clearb = clearb << index;
	*n = (*n & ~clearb);
	return (1);
}
