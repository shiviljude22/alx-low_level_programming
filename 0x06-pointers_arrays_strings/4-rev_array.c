#include "main.h"

/**
 * reverse_arrray - reverse the content of an array of integers
 * @a: array of integers to be reversed
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
