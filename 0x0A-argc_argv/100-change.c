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
	int i, j, k;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (atoi(argv[1]) < 0)
		printf("0\n");
	else
	{
		j = atoi(argv[1]);
		k = 0;
		for (i = j; i >= 25; i -= 25)
		{
			k++;
		}
		for ( ; i >= 10; i -= 10)
		{
			k++;
		}
		for ( ; i >= 5; i -= 5)
		{
			k++;
		}
		for ( ; i >= 2; i -= 2)
		{
			k++;
		}
		for ( ; i >= 1; i -= 1)
		{
			k++;
		}
		printf("%d\n", k);
	}
	return (0);
}
