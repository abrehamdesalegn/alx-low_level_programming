#include "main.h"
/**
 * _memset - check the code
 *
 * Return: Always 0.
 *@s: para1
 *@b: para
 *@n: para
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *temp;
	unsigned int i;

	temp = s;
	for (i = 0; i < n; i++)
	{
		*temp = b;
		temp++;
	}
	return (s);
}
