#include "main.h"
#include <stdlib.h>

/**
* *_strdup - returns a pointer to a newly allocated space in memory.
* @str: string given.
* Return: returns a pointer.
*/
char *_strdup(char *str)
{
	int i = 1, size = 0;
	char *ns;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	ns = (char *)malloc((sizeof(*str) * i) + 1);

	if (ns == NULL)
	{
		return (NULL);
	}
	while (size < i)
	{
		ns[size] = str[size];
		size++;
	}
	return (ns);
}
