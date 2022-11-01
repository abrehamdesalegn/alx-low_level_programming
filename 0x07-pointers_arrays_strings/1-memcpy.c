#include "main.h"
/**
 * _memcpy - check the code
 *
 * Return: Always 0.
 *@src: para1
 *@dest: para
 *@n: para
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *temp, *temp2;
	unsigned int i;

	temp = src;
	temp2 = dest;
	for (i = 0; i < n; i++)
	{
		*temp2 = *temp;
		temp++;
		temp2++;
	}
	return (dest);
}
