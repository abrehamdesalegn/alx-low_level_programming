#include <stdio.h>
/**
* main - func
*@argc: para
*@argv: para
*Return: 0
*/
int main(int argc, char *argv[])
{
	while (argc >= 0)
	{
		printf("%s\n", argv[argc]);
		argc--;
	}
	return (0);
}
