#include "main.h"
/**
 * length - check the code
 *
 * Return: Always 0.
 *@s: para
 */
int length(char *s)
{
	int count;

	count = 0;
	if (*s != '\0')
	{
		s++;
		count = length(s);
		count++;
	}
	return (count);
}
/**
* check - check the code
*
* Return: Always 0.
*@s: para
*@length: para
*@index: para
*/
int check(char *s, int length, int index)
{
	int r;

	r = 1;
	if (index >= length / 2)
		r = 1;
	else if (s[index] == s[length - index - 1])
	{
		r *= check(s, length, index + 1);
	}
	else
		r = 0;
	return (r);
}
/**
* is_palindrome - check the code
*
* Return: Always 0.
*@s: para
*/
int is_palindrome(char *s)
{
	int count, index;

	index = 0;
	count = length(s);
	return (check(s, count, index));
}
