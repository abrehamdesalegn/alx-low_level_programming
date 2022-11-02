#include "main.h"

/**
 * _strlen_recursion - check the code
 *
 * Return: Always 0.
 *@s: para
 */
int _strlen_recursion(char *s)
{
	int count;

	count = 0;
	if (*s != '\0')
	{
		s++;
		count=_strlen_recursion(s);
		count++;
	}
	return (count);	
}
