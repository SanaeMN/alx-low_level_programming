#include "main.h"

/**
* *string_toupper - function that changes all lowercase letters.
* @n:pointer
* Return: the result.
*/
char *string_toupper(char *n)
{
	int i;

	for (i = 0; i < n--; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] = n[i] - 32;
		}
	}
	return (n);
}
