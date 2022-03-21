#include "main.h"

/**
 *_strlen - return the length of a string
 *@s: string
 *Return: lenght of a string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
