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
	char *ar;
	int i, j, len1, len2;

	j = (int)n;
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
	ar = malloc(sizeof(char) * (len1 + 1 + j + 1));
	if (ar == NULL)
		return (NULL);
	i = 0;
	while (i <= len1 + j)
	{
		if (i <= len1)
			ar[i] = s1[i];
		else if (i > len1 && i <= j + len1)
			ar[i] = s2[i - len1 - 1];
		else
			ar[i] = s2[i];
		i++;
	}
	ar[i] = '\0';
	return (ar);
}
