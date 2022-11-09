#include <stdio.h>
/**
* main - func
*@argc: para
*@argv: para
*Return: 0
*/
int main(int argc, char *argv[])
{
	int c, i;

	c = 0;
	while (argc >= 0)
	{
		c++;
		argc--;
	}
	for (i = 0; i < c; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
