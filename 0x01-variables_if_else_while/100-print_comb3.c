#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all possible different combinations of two digits
 * 01 and 10 are considered the same combination of the two digits 0 and 1
 * print only the smallest combinaiton in ascending order
 * Return: return 0
 */
int main(void)
{
	int c;
	int d = 0;

	while (d < 10)
	{
		c = 0;
		while (c < 10)
		{
			if (d != c && d < c)
			{
				putchar('0' + d);
				putchar('0' + c);

				if (c + d != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}

			c++;
		}
		d++;
	}
	putchar('\n');
	return (0);
}
