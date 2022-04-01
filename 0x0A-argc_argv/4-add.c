#include <stdio.h>
#include <stdlib.h>
/**
 * main -  prints the sum of positive numbers
 * @argc: argument count
 * @argv: array of pointers to arguement strings
 * Return: 0
 **/

int main(int argc, char *argv[])
{
	int sum, i;
	char *p;
	int n;

	sum = 0;
	if (argc > 1)
	{
		for (i = 1; argv[i]; i++)
		{
			n = strtol(argv[i], &p, 10);
			if (!*p)
				sum += n;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
