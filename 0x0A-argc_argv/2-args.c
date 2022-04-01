#include <stdio.h>
#include <stdlib.h>
/**
 * main -  prints all arguments, including the first one
 * @argc: argument count
 * @argv: array of pointers to arguement strings
 * Return: 0
 **/
int main(int argc, char *argv[])
{
	while (argc--)
	printf("%s\n", *argv++);
	exit(EXIT_SUCCESS);
}
