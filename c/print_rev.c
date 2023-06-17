#include <stdio.h>
/**
 * PrintRev - prints in reverse
 * @param: ?
 *
 */
void PrintRev(char *str);

/**
 * main - Function call
 *
 * Return: 0
 */

int main(void)
{
	char *str1;

	str1 = "I do not fear computers, I fear the lack of them - Isaac Asimov";

	PrintRev(str1);
	putchar('\n');

	return (0);
}
void PrintRev(char *str)
{
	for (;*str != '\0'; *str++);

	while (*--str)
	{
		putchar(*str);
	}
}
