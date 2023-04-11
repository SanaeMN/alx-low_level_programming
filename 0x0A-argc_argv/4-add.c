#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* main - program that adds positive numbers.
* @argc: size
* @argv: array list
* Return: always 0 (succes)
*/
int main(int argc, char  *argv[])
{
	int i = 1;
	unsigned int b = 0, sum = 0;
	char *d;

	if (argc > 1)
	{
		while (i < argc)
		{
			d = argv[i];
			while (b < strlen(d))
			{
				if (d[b] < '0' || d[b] > '9')
				{
					printf("Error\n");
					return (1);
				}
				b++;
			}
			sum = sum + atoi(d);
			d++;
			i++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
