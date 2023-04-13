#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* *string_nconcat - function that concatenates two strings.
* @s1: first string given.
* @s2: second string given.
* @n: nbr of characters to allocate.
* Return: the pointer.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int ln1 = 0, ln2 = 0, i = 0, l = 0;
	char *t;

	if (s1 == NULL)
		s1 = "";
	while (s1[ln1] != '\0')
	{
		ln1++;
	}
	if (s2 == NULL)
		s2 = "";
	while (s2[ln2] != '\0')
	{
		ln2++;
	}
	if (n >= ln2)
		l = ln1 + ln2;
	else
		l = ln1 + n;
	t = (char *)malloc(sizeof(char) * l + 1);
	if (t == NULL)
		return (NULL);
	ln2 = 0;

	while (i < l)
	{
		if (i <= ln1)
		{
			t[i] = s1[i];
		}
		if (i >= ln1)
		{
			t[i] = s2[ln2];
			ln2++;
		}
		i++;
	}
	t[i] = '\0';
	return (t);
}
