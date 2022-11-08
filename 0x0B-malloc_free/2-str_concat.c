#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * str_concat - prints buffer in hexa
 * @s1: the size of the memory to print
 *@s2: string
 * Return: Nothing.
 */
char *str_concat(char *s1, char *s2)
{
	char *ar;
	unsigned int i, len1, len2;

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
	if (len1 > 0)
		len1 --;
	i = 0;
	while (s2[i])
	{
		len2++;
		i++;
	}
	ar = (char *) malloc(sizeof(char) * (len1 + 1 + len2 + 1));
	if (ar == NULL)
		return (NULL);
	i = 0;
	while (i <= len1 + len2)
	{
		if (i <= len1)
			ar[i] = s1[i];
		else if (i > len1)
			ar[i] = s2[i - 1 - len1];
		i++;
	}
	return (ar);
}
