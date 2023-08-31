#include "main.h"

/**
 * _cd: changes directory
 * @path: Path to change directory
 *
 * Return: exit status
 */
int _cd(char *path)
{
	int i;
	char s[1024];

	if (strcmp(path, "~") == 0)
		i = chdir(getenv("HOME"));
	else if (strcmp(path, "-") == 0)
		i = chdir(getenv("OLDCWD"));
	else if (strcmp(path, NULL) == 0)
		i = chdir(getenv("HOME"));
	else
		i = chdir(path);

	if (i != 0)
	{
		perror("Dir not found");
	}
	printf("Done\n");
	printf("Dir: %s\n", getcwd(s, sizeof(s)));
	return (i);
}
