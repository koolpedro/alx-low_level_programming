#include "main.h"
#include <stdio.h>

/**
 * main - Prints all argument passed into main
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%d\n", argv[i]);

	return (0);
}
