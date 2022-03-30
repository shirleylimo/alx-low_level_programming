#include "main.h"
/**
 * _pow_recursion - Short description, single line
 * @x: Description of parameter n
 * @y: Description of parameter n
 * Return: 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	return (1);
}
