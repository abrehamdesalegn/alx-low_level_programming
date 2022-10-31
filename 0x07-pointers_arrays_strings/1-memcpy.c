#include "main.h"
/**
 * _memcpy - check the code
 *
 * Return: Always 0.
 *@src: para1
 *@dest: pa
 *@n: para
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*dest = *src;
		src++;
		dest++;
	}	
}
