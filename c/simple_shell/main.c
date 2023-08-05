#include "main.h"

int main(int argc, char **argv)
{
	char *lineptr, *lineptr_copy;
	char *prompt = "(SimpleShell) $ ";
	const char *delim = " \n";
	size_t n = 32;
	size_t a = -1, m;
	(void)argc; (void)argv;
	int num_token = 0, i;
	char *token;

	while (1)
	{
		//Allocates lineptr with malloc
		lineptr = malloc(sizeof(char) * n);
		printf("%s", prompt);
		//using getline to get user string
		m = getline(&lineptr, &n, stdin);
		if (m == a) //Test for EOF to exit shell
		{
			printf("Exiting shell...\n");
			return (-1);
		}
		//Making a copy of lineptr
		//Because it will be broken with strtok
		//func
		printf("%s\n", lineptr);
		lineptr_copy = malloc(sizeof(char) * m);
		if (lineptr_copy == NULL)
		{
			perror("Sh: Malloc failed\n");
			return (-1);
		}
		strcpy(lineptr_copy, lineptr);
		//Splitting lineptr
		token = strtok(lineptr, delim);
		while (token != NULL)
		{
			num_token++;
			token = strtok(NULL, delim);
		}
		num_token++;
		argv = malloc(sizeof(char *) * num_token);

		token = strtok(lineptr_copy, delim);
		for (i = 0; token != NULL; i++)
		{
			argv[i] = malloc(sizeof(char) * strlen(token));
			strcpy(argv[i], token);
			token = strtok(NULL, delim);
		}
		argv[i] = NULL;
		execmd(argv);

		free(lineptr);
	}

	return (0);
}
