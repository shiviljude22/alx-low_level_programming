#include "main.h"
/**
 * swap_int - swap the values of two integers.
 * @a: first integer to swap
 * @b: second integer to swap
 * Return: Return nothing on success
 */
void swap_int (int *a, int *b);
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
