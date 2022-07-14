#include "main.h"

/**
 * strcat - Concatenates two strings
 * @src: Source string
 * @dest: Destination string
 *
 * Return: A pointer to the resulting string dest
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
