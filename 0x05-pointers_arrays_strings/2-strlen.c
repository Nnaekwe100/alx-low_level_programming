#include "main.h"

/**
 * _strlen - Will return the length of a string
 * @s: The string
 * Return: The length
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}
