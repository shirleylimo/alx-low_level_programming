#include <stdio.h>
#include <stdlib.h>
/**
 * main -  prints the number of arguments passed into it
 * @argc: argument count
 * @argv: array of pointers to arguement strings
 * Return: 0
 **/
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	exit(EXIT_SUCCESS);
}
