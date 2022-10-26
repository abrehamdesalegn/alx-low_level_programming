#include "main.h"
/**
 * *_strncat - check the code
 *
 * Return: Always 0.
 *@*dest: para1
 *@*src: para2
 *@n: para
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		if (j == n)
		{
			break;
		}
		dest[i + j] = src[j];
	}
	return(dest);
}
