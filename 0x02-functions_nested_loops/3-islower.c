#include "main.h"
/**
* _islower - check the code.
*
* Return: Always 0.
* @c: - input par
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
