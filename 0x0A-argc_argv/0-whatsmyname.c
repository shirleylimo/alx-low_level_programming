#include <stdlib.h>
#include <stdio.h>
/**
 * main -  writes its name
 * @argc: argument count
 * @argv: array of pointers to arguement strings
 * Return: 0
 **/
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	exit(EXIT_SUCCESS);
}
