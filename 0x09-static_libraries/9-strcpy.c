#include "main.h"
/**
 * *_strcpy - a function that copies the string pointed
 * @dest: distination string
 * @src: source string
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ptr);
}
