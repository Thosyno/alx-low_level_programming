#include <string.h>
#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed.
 */
void print_rev(char *s)
{
	int i, len = strlen(str);

	for (i = len - 1; i >= 0; i--)
		_putchar(str[i]);

	_putchar('\n');
}
