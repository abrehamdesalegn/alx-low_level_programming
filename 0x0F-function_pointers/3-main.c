#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
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
 	*op = *argv[2];
 	if (argc != 3)
 	{
 		printf("Error");
 		exit(98);
	}
 	if (argv[2] != "+" && argv[2] != "*" && argv[2] != "-" && op != "/" && op != "%")
 	{
 		printf("Error");
 		exit(99);
	}
	if (op == "/" || op == "%" && b == 0)
 	{
 		printf("Error");
 		exit(100);
	}
 	s = get_op_func(op)(a,b);
 	printf("%d\n",s);
 	return (0);
 }
