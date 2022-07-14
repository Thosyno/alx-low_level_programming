#include "main.h"

/**
 * strcat - Concatenates the string pointed to by @src to
 * the end of the string pointed to by @dest.
 * @src: String to be concatenated upon.
 * @dest: String that will be appended.
 *
 * Return: returns pointer to @dest.
 */
char *_strcat(char *dest, char *src);
{
	int destLen = 0;
	int srcLen = 0;

	while (dest[destLen] != '\0')
		dest_len++;

	while (src[srcLen])
	{
		dest[destLen] = src[srcLen];
		srcLen++;
		destLen++;
	}
	dest[destLen] = '\0';

	return (dest);
}
