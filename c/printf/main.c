#include "main.h"
/**
 * main - Tests the code
 *
 * Return: 0
 */
int main(void)
{
	char *c = "Hello";
	char *d = "World";
	char name = 97;
	char name1 = 'G';

        _printf("String1: %s world\n", c);
	_printf("String2: %s, %s\n", c, d);
	_printf("Char: %c\n", name);
	_printf("Char 2: %c\n", name1);
	_printf("Decimal: %d\n", 11);
	_printf("Integer: %i\n", 11);
	_printf("Percent: %%, %%\n");
	return (0);
}
