#include "main.h"
/**
 * _strchr - check the code
 *
 * Return: Always 0.
 *@s: para1
 *@accept: para
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	j = 0;
	while (*s != ' ')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (accept[i] == *s)
			{
				j++;
				break;
			}
		}
		s++;
	}
	return (j);
}
