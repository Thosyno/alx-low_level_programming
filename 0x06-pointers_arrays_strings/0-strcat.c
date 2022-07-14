#include "main.h"

/**
 * strcat - Concatenates the string pointed to by @src to
 * the end of the string pointed to by @dest.
 * @src: String to be concatenated upon.
 * @dest: String that will be appended.
 *
 * Return: returns pointer to @dest.
 */
char strcat(char *dest, char *src)
{
	int i = 0, dest_len = 0

	while (dest[i++])
		dest_len++;

	for (i = 0; src[i]; i++)
		dest[dest_len++] = src[i];
	return (dest);
}