#include <stdio.h>
/**
 * PrintStr - prints a string
 * @*str: character printed
 *
 */
int PrintStr(char *str);
/**
 * main - function call
 * @params: wbfl
 *
 * Return: 0
 */
int main(void)
{
	char *str = "I like C!\n";
	int (*ptr)(char *str);

	ptr = PrintStr;
	if (!(ptr)(str))
		printf("Done");

	putchar('\n');

	return (0);
}

int PrintStr(char *str)
{
	puts(str);

	return (0);
}
