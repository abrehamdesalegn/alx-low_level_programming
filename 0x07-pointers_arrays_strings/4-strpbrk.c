#include "main.h"
/**
 * _strpbrk - check the code
 *
 * Return: Always 0.
 *@s: para1
 *@accept: para
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (accept[i] == *s)
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
