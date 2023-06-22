#include <stdio.h>
/**
 * main - accepts command line arguments
 *
 * Return - 0
 */

int main(int argc, char *argv[])
{
	int i;

	printf("The number of command received is %d\n", argc);

	if (argc > 2)
	{
		printf("The first argument is %s\n", argv[0]);
		printf("Other args are: \n");
		for (i = 1; i < argc; i++)
			printf("%s\n", argv[i]);
	}
	else
		printf("Enter more than one argument\n");

	return (0);
}
