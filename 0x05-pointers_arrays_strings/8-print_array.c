#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers.
 * @a: input array.
 * @n: input n elements.
 * Return: no return
 */
void print_array(int *a, int n)
{
	int index = 0;

	for (; index < n; index++)
	{
		printf("%d", *(a + index));
		if (index != (n - 1))
			printf(", ");
	}
	printf("\n");
}
