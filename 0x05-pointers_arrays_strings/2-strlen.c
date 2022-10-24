#include "main.h"
/**
 * _strlen - check the code
 *
 * Return: Always 0.
 * @s: ara1
 */
int _strlen(char *s)
{
	unsigned int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
