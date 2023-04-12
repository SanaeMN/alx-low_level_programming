#include "main.h"
#include <stdlib.h>

/**
* _strlen -  function that calculate the lenght.
* @s: string given.
* Return: the lenght.
*/
char _strlen(char *s)
{
	int size = 0;

	while (s[size] != '\0')
	{
		size++;
	}
	return (size);
}

/**
* *str_concat -  function that concatenates two strings.
* @s1: first string given.
* @s2: second string given.
* Return: returns a pointer.
*/
char *str_concat(char *s1, char *s2)
{
	int size1, size2, i = 0;
	char *n;

	if (s1 == NULL)
	{
		s1 = '\0';
	}
	if (s2 == NULL)
	{
		s2 = '\0';
	}
	size1 = _strlen(s1);
	size2 = _strlen(s2);
	n = malloc((size1 + size2) * sizeof(char) + 1);

	if (n == 0)
		return (0);
	while (i <= size1 + size2)
	{
		if (i < size1)
		{
			n[i] = s1[i];
		}
		else
		{
			n[i] = s2[i - size1];
		}
		i++;
	}
	n[i] = '\0';
	return (n);
}
