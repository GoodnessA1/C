#include <stdio.h>
/**
 * PrintStr - prints a string
 * @params: ?
 *
 */
void PrintStr(char str1[2][15], int max1, int max2);
/**
 * main - call function
 * @param: ?
 *
 * Return: 0
 */
int main(void)
{
	char str[2][15] = {"You know what,", "C is Powerful"};

	PrintStr(str, 2, 15);
	return (0);
}
void PrintStr(char str1[2][15], int max1, int max2)
{
	int i, j;

	for (i = 0; i < max1; i++)
		for (j = 0; j < max2; j++)
			printf("%c", str1[i][j]);

	putchar('\n');
}
