#include "main.h"
#include <stdio.h>
/**
* main - program that prints its name
* @argc: size
* @argv: array list
* Return: always 0 (succes)
*/
int main(int argc, char  *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
