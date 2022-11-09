#include <stdio.h>
#include <stdlib.h>
/**
* main - func
*@argc: para
*@argv: para
*Return: 0
*/
int main(int argc, char *argv[])
{
	int i, j;

	argc = 1;
	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		j = 0;
		for (i = 0; i < argc; i++)
		{
			if (*argv[i] < 48 || *argv[i] > 57)
			{
				printf("Error\n");
				return (1);
			}
			j += atoi(argv[i]);
		}
		printf("%d\n", j);
	}
	return (0);
}
