#include <stdio.h>

/**
 * main -  prints possible combinations of single-digit num.
 * Return: Always 0 (success)
 */

int main(void)
	{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
		if (a < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
	}
