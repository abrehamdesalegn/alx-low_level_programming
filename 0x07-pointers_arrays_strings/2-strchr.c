#include "main.h"
/**
 * _strchr - check the code
 *
 * Return: Always 0.
 *@s: para1
 *@c: para
 */
char *_strchr(char *s, char c)
{
	int i;

	while (s)
	{
		if (*s == c)
		{
			break;
		}
		s++;
	}
	return (s);
}
