#include "main.h"

/**
 * _strcat - Will concatenate two strings
 * @dest: The input value
 * @src: The input value
 *
 * Return: Void
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int k;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	k = 0;
	while (src[k] != '\0')
	{
		dest[i] = src[k];
		i++;
		k++;
	}

	dest[i] = '\0';
	return (dest);
}

