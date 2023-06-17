#include <stdio.h>
/**
 * MultiTwo - multiplies two integers
 * @x: integer operand
 * @y: integer operand
 */
void MultiTwo(int x, int y);

/**
 * main - Function call
 * @op_1: operand
 * @op_2: operand
 * @result: operand
 *
 * Return: 0
 */
int main(void)
{
	int op_1, op_2;

	printf("Enter a number:\t");
	scanf("%i", &op_1);
	putc('\n', stdout);
	puts("Enter another number:");
	scanf("%i", &op_2);
	MultiTwo(op_1, op_2);
	printf("End of Function");
	putchar('\n');

	return (0);
}

void MultiTwo(int x, int y)
{
	int i;

	i = x * y;
	printf("The result of %i * %i is   %i", x, y, i);
	putchar('\n');
}
