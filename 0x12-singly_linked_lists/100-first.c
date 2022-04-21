#include <stdio.h>

void p(void) __attribute__ ((constructor));

/**
 * p- prints from init by the loader before main
 * returns: nothing
 */

void p(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
