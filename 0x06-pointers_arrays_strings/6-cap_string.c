#include "main.h"
/**
 * *cap_string - check the code
 *
 * Return: Always 0.
 *@str: para1
 */
char *cap_string(char *str)
{
	int index, n;

	n = 0;
	while (str[n] != '\0' || str[n + 1] != '\0')
	{
		n++;
	}
	for (index = 0; index < n; index++)
	{
		if (str[index - 1] == ' ' ||
			str[index - 1] == '\t' ||
			str[index - 1] == '\n' ||
			str[index - 1] == ',' ||
			str[index - 1] == ';' ||
			str[index - 1] == '.' ||
			str[index - 1] == '!' ||
			str[index - 1] == '?' ||
			str[index - 1] == '"' ||
			str[index - 1] == '(' ||
			str[index - 1] == ')' ||
			str[index - 1] == '{' ||
			str[index - 1] == '}' ||
			index == 0)
		{
			if (str[index] <= 122 && str[index] >= 97)
			{
				str[index] -= 32;
			}
		}
	}
	return (str);
}
