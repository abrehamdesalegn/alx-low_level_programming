#include <stdio.h>
/**
* main - func
*@argc: para
*@argv: para
*Return: 0
*/
int main(int argc, __attribute__((unused)) char *argv[])
{
	int c;

	c = 0;
	while (argc >= 0)
	{
		c++;
		argc--;
	}
	printf("%d\n", c - 2);
	return (0);
}
