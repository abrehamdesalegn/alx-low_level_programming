#include "main.h"
/**
 * *_strcat - check the code
 *
 * Return: Always 0.
 *@*dest: para1
 *@*src: para2
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i+j]= '\0';
	return(dest);
}
