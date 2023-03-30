#include "main.h"

/**
* *_strncat - function that concatenates two strings.
* @dest: destination string.
* @src: source string.
* @n: n bytes from src.
* Return: the pointer to dest.
*/
char *_strncat(char *dest, char *src, int n)
{
	int dest_l = 0;
	int i;

	while (dest[dest_l] != '\0')
	{
		dest_l++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_l + i] = src[i];
	}
	dest[dest_l + n] = '\0';
	return (dest);
}
