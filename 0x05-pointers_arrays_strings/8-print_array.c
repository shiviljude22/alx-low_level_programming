#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers.
 * @n: number of element of the array
 * @a: array to be printed
 * Return: nothing on success
 */
void print_array(int *a, int n)
{
	int count = 0;

	while (count < n)
	{
		printf("%d", a[count]);

		if (count != (n - 1))
			printf(", ");
		count++;
	}
	putchar('\n');
}

