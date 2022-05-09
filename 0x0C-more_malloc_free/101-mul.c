#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two positive integers
 * @argc: number of arguments
 * @argv: value of arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		result = num1 * num2;
		printf("%d\n", result);
		return (0);
	}	
}
