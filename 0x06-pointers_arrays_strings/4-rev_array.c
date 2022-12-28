#include "main.h"

/**
 * reverse_arrray - reverse an array of int
 * @a: array of integer
 * @n: number of element of the array
 * Return: reverse_array
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		n--;
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
