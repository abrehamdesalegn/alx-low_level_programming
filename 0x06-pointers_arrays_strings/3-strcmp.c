#include "main.h"
/**
 * _strcmp - check the code
 *
 * Return: Always 0.
 *@s1: para1
 *@s2: para2
 */
int _strcmp(char *s1, char *s2)
{
	int j, i;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	if (i > j)
	{
		i = 15;
	}
	else if (i < j)
	{
		i = -15;
	}
	else
		i = 0;
	return (i);
}
