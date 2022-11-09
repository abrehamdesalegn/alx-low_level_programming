#include <stdio.h>
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
	if (argv[argc] == NULL || argv[argc + 1] == NULL)
	{
		printf("Error\n");
		return (1);
	}
	i = *argv[argc];
	j = *argv[argc + 1];
	printf("%d\n", i * j);
	return (0);
}
