#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - check the code
 *@n: int
 *@s1: char
 *@s2: char
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *mem;
	unsigned int len1, len2, i;

	i = 0;
	len1 = 0;
	len2 = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
	{
		len1++;
		i++;
	}
	len1 -= 1;
	i = 0;
	while (s2[i])
	{
		len2++;
		i++;
	}
	mem = (char *) malloc(sizeof(char) * (len1 + 1 + len2 + 1));
	if (mem == NULL)
		return (NULL);
	i = 0;
	while (i <= len1 + n)
	{
		if (i <= len1)
			mem[i] = s1[i];
		else if (i > len1 && i <= (n + len1))
			mem[i] = s2[i - len1 - 1];
		else
			mem[i] = s2[i];
		i++;
	}
	return (mem);
}
