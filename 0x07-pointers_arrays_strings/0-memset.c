#include "main.h"
/**
 * _memset - check the code
 *
 * Return: Always 0.
 *@s: para1
 *@b: pa
 *@n: para
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*s = b;
		s++;
	}
	return (s);
}
