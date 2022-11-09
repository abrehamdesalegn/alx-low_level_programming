#include <stdio.h>
/**
* main - func
*@argc: para
*@argv: para
*Return: 0
*/
int main(int argc, int *argv[])
{
	int i;

	if (argv[1] == NULL || argv[2])
	{
		printf("Error");
		return (1);
	}
	printf("%d\n", *argv[1] * *argv[2]);
	return (0);
}
