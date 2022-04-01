#include <stdio.h>
#include <stdlib.h>
/**
 * main -  prints the result of the multiplication, followed by a new line
 * @argc: argument count
 * @argv: array of pointers to arguement strings
 * Return: 0
 **/
int main(int argc, char *argv[])
{
	int mul;

	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
		exit(EXIT_SUCCESS);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
