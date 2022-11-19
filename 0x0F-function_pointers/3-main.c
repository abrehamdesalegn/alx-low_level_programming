#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * get_op_func - Struct op
 *
 * @argc: The operator
 * @argv: char
 * Return: alweys 0
 */
 int main(int argc, char *argv[])
 {
 	int a, b, s;
 	char *op;
	
 	a = atoi(argv[1]);
 	b = atoi(argv[3]);
 	op = argv[2];
 	if (argc != 4)
 	{
 		printf("Error\n");
 		exit(98);
	}
 	if (get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op == '/' || *op == '%') && b == 0)
 	{
 		printf("Error");
 		exit(100);
	}
 	s = get_op_func(op)(a,b);
 	printf("%d\n",s);
 	return (0);
 }
