#include "main.h"

int main(int argc, char **argv)
{
	char *lineptr, *lineptr_copy, *token;
	char *prompt = "$ ";
	const char *delim = " \n";
	size_t n = 32, a = EOF, m;
	int num_token, i, u;
	pid_t pid;
	(void)argc;

	while (1)
	{
		printf("%s", prompt);
		//Allocates lineptr with malloc
		lineptr = malloc(sizeof(char) * n);
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
		lineptr_copy = malloc(sizeof(char) * m);
		if (lineptr_copy == NULL)
		{
			perror("Sh: Malloc failed\n");
			return (-1);
		}
		strcpy(lineptr_copy, lineptr);
		//Splitting lineptr
		token = strtok(lineptr, delim);
		num_token = 0;
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
		printf("%s\n", argv[0]);
		u = handle_built_in(argv);
		if (u == 1)
		{
			pid = fork();
			if (strcmp(argv[0], "exit") == 0)
			{
				kill(pid, 100);
				printf("Exiting shell\n");
				return (100);
			}
			if (pid == 0)
			{
				execmd(argv);
				exit(0);
			}
			else
			{
				wait(&pid);
			}
		}
	}
	free(lineptr);
	free(lineptr_copy);

	return (0);
}
