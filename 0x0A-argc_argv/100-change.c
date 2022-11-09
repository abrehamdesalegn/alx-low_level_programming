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
		for (i = j; i >= 25; )
		{
			k++;
			i -= 25;
		}
		for ( ; i >= 10; )
		{
			k++;
			i -= 10;
		}
		for ( ; i >= 5; )
		{
			k++;
			i -= 5;
		}
		for ( ; i >= 2; )
		{
			k++;
			i -= 2;
		}
		for ( ; i >= 1; )
		{
			k++;
			i -= 1;
		}
		printf("%d\n", k);
	}
	return (0);
}
