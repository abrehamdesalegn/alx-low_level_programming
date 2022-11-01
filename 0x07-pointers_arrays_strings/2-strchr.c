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
	char *i;

	i = s;
	while (*i >= '\0')
	{
		if (*i == c)
		{
			break;
		}
		i++;
	}
	return (i);
}
