#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	char *p = (char *)main;
	int byt;

	if (argc != 2)
		printf("Error\n"), exit(1);
	byt = atoi(argv[1]);
	if (byt < 0)
		printf("Error\n"), exit(2);
	while (byt--)
		printf("%02hhx%s", *p++, byt ? " " : "\n");
	return (0);
}
