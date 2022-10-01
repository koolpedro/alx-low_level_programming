#include "main.h"
#include <stdio.h>

/**
 * main - print the arguments recieved
 * @argc: count arguments
 * @argv: Arguments
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	/*Declaring variables*/
	int count = 0;

	if (argc > 0)
	{
		/*WHILE - print each arguments*/
		while (count < argc)
		{
			print("%s\n", argv[count]);
		}
	}
}
