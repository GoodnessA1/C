#include "main.h"

/**
 * execmd - Is in charge of execution
 * @argv: Parameter for function
 */
void execmd(char **argv)
{
	char *command = NULL;

	if (argv)
	{
		command = argv[0];

		if (execve(command, argv, NULL) == -1)
		{
			perror("Error:");
		}
	}
}
