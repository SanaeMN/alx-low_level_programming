#include "main.h"

/**
 * puts2 - function shoud prints only one character out of two starting
 *@str: input
 * Return: Always 0.
 */
void puts2(char *str)
{
	int longi = 0;
	int t = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		longi++;
	}
	t = longi = 1;
	for (o = 0 ; o <= t ; o++)
	{
		if (o % 2 == 0)
		{
			_putchar(str[o]);
		}
	}
	_putchar('\n');
}
