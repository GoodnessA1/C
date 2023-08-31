#include "main.h"
/**
 * handle_built_in - Handles built in
 * @argv: commands
 *
 * Return: I don't know for now
 */
int handle_built_in(char **argv)
{
	if (strcmp(argv[0], "cd") == 0)
	{
		_cd(argv[1]);
		return (0);
	}

	return (1);
}
