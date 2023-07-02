#include "main.h"
#include <stdio.h>
/**
 * main - Theain code that connects all other functions
 *
 * Return: Always 0
 */
int main(void)
{
	int a, b;

	printf("Enter the dimensions of the matrix\n");
	printf("Ensure to space the dimensions for a proper output\n");
	scanf("%d%d", &a, &b);
	matrix_creation(a, b);
	return (0);
}
