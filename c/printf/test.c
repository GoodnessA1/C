#include <stdio.h>
#include <unistd.h>

int main(void)
{
	char name;
	char *n;
	int a, b;

	name = 'G';
	write(STDOUT_FILENO, &name, 1);
	putchar('\n');
	a = 18;
	printf("%b\n", a);
	while (a < 0)
	{
		b = 0 + (a % 2);
		printf("%i", b);
	}
	putchar('\n');
	printf("%%\n");
	return (0);
}
