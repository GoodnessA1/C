/*3. Rewrite the program in Listing 15.3. This time, make a function that takes a variable number of intarguments and performs the operation of multiplication on these arguments.*/
#include <stdio.h>
#include <stdarg.h>
/**
 * MultiFunc - multiply parameters
 * @args - many arguments
 *
 */
int MultiFunc(int i, ...);
/**
 * main - Function call
 * @args: arguments
 *
 * Return: 0 (Successful)
 */
int main(void)
{
	int a, b, c, d;

	a = 23;
	b = 12;
	c = 13;
	d = 15;

	printf("Multiplication of one num is:\n");
	printf("%i\n", MultiFunc(1, a));

	printf("Multiplication of two num is:\n");
        printf("%i\n", MultiFunc(2, a, b));

	printf("Multiplication of three num is:\n");
        printf("%i\n", MultiFunc(3, a, b, c));

	printf("Multiplication of four num is:\n");
        printf("%i\n", MultiFunc(4, a, b, c, d));

	return (0);
}

int MultiFunc(int i, ...)
{
	va_list arglist;
	int x, result;

	result = 1;
	printf("Number of arguments provided are %i\n", i);
	va_start (arglist, i);
	for (x = 0; x < i; x++)
	{
		result *= va_arg(arglist, int);
	}
	va_end (arglist);
	return result;
}
