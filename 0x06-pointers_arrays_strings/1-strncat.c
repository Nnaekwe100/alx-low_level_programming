#include "main.h"

/**
 * _strncat - This will concatenate two strings
 * by using at most n bytes from src
 * @dest: input value
 * @src: The input value
 * @n: The input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int v;
	int j;

	v = 0;
	while (dest[v] != '\0')
	{
		v++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[v] = src[j];
		v++;
		j++;
	}
	dest[v] = '\0';
	return (dest);
}
