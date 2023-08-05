#include "main.h"

/**
 * execmd - Is in charge of execution
 * @argv: Parameter for function
 */
void execmd(char **argv)
{
	char *actual_command;
	char *command = NULL;

	if (argv)
	{
		command = argv[0];
		actual_command = get_location(command);
		if (execve(actual_command, argv, NULL) == -1)
		{
			perror("Error:");
		}
	}
}
