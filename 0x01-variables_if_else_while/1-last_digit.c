#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assign a random number to the variable n each time it is executed
 * @n>5: the string and is greater than 5
 * @n=0: the string and is 0
 * @n<6 and not 0: the string and is less than 6 and not 0
 * Return: 0
 */
int main(void)
{
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;
	printf("Last digit of %d is %d ", n, x);
	if (x > 5)
	{
		printf("and is greater than 5");
	}
	if (x == 0)
	{
		printf("and is 0");
	}
	if (x < 6 && x != 0)
	{
		printf("and is less than 6 and not 0");
	}
	printf("\n");
	return (0);
}
