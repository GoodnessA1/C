#include <stdio.h>

enum input {MIN_NUM = 0,
	MAX_NUM = 100};

int addNums(int a);
/**
 * main - checks the code
 * 
 * Return: Always 0(Successful)
 */
int main(void)
{
	typedef int INTEGER;
	INTEGER b;

	b = addNums(MIN_NUM);
	printf("Result of function is: %i\n", b);

	return (0);
}
/**
 * addNums - Adds the numbers between a range
 *
 * Return: sum
 */
int addNums(int a)
{
	if (a == MAX_NUM + 1)
		return (0);
	return (addNums(a + 1) + a);
}
