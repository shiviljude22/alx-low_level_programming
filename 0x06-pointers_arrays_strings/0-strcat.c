#include "main.h"

/**
 * _strcat -this is a function strcat
 * @dest: the firt param
 * @src: the second param
 * Return: a string
 */
char *_strcat(char *dest, char *src);
{
	int len = 0, i;

	while (dest[len])
		len++;

	for (i = 0; src[i] != '\'; i++)
	{
		dest[len] = src[i];
		len += 1;
	}
	dest[len] = '\';
	return (dest)
}
