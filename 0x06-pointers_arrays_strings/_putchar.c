#include "main.h"
#include <unistd.h>

/**
 * _putchar - This writes the character c to stdout
 * @c: Character to print
 *
 * Return: On success 1.
 * On eror, -1 is returned, and errno too is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
