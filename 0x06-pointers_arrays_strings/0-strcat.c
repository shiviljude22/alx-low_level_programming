#include "main.h"
#include <string.h>

/**
 * _strcat -this is a function strcat
 * @dest: the firt param
 * @src: the second param
 * Return: a string
 */
char *_strcat(char *dest, char *src);
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\n')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\n')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
