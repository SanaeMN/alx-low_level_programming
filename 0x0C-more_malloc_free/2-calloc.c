#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* *_calloc - function that allocates memory for an array.
* @nmemb: an array size.
* @size: size giving.
* Return: pointer to the allocated memory.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, l = 0;
	char *t;

	if (nmemb == 0 || size == 0)
		return (NULL);
	l = nmemb * size;
	t = (char *)malloc(l);
	if (t == NULL)
		return (NULL);
	while (i < l)
	{
		t[i] = 0;
		i++;
	}
	return (t);
}
