#include "main.h"
#include <unistd.h>

/**
 * _putcher - writes the character c to stdout
 * @c: the character to print
 *
 * Return: on sucess 1
 */
int _putcher(char c)
{
	return (write(1, &c, 1));
}
