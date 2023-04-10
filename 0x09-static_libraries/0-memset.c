#include "main.h"

/**
* *_memset - function that fills memory with a constant byte.
* @s: starting adress of memory to be filled
* @b: the constant byte
* @n: number of bytes to be changed
* Return: pointer to the memory area s.
*/
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
	{
		*p++ = b;
	}
	return (s);
}
