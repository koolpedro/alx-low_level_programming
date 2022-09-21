#include "main.h"

/**
 * strcat - this is a function strcat
 * @desc: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 * Return: a string
 */
char *strcat(char *dest, const char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
