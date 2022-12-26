#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: string whose lenght is to be found.
 * Return: returns the lenght of the @s
 */
int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
		count++;
	return (count);
}
