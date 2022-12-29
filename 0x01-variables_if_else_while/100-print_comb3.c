#include <stdio.h>
#include <stdlib.h>

/**
 * main - this program prints all possible different combinations of two digits
 * @01 and 02: the considered combinations
 * print only the smallest combinaiton in ascending order.
 * Return: return 0 (success)
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
