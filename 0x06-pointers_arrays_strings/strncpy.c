#include "main.h"
/**
 * *_strncpy - check the code
 *
 * Return: Always 0.
 *@dest: para1
 *@src: para2
 *@n: para
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
