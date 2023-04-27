#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
* first - function that print before main is executed.
* return: void.
*/
void first(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
