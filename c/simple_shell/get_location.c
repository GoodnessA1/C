#include "main.h"

char *get_location(char *command)
{
	char *path, *path_copy, *file_path;
	char *token;
	int command_len, directory_len;
	struct stat buffer;

	path = getenv("PATH");
	if (path)
	{
		path_copy = strdup(path);
		command_len = strlen(command);
		token = strtok(path, ":");

		while (token != NULL)
		{
			directory_len = strlen(token);
			file_path = malloc(command_len + directory_len + 2);
			strcpy(file_path, token);
			strcat(file_path, "/");
			strcat(file_path, command);
			strcat(file_path, "\0");

			if (stat(file_path, &buffer) == 0)
			{
				free(path_copy);
				return (file_path);
			}
			else {
				free(file_path);
				token = strtok(NULL, ":");
			}
		}
		free(path_copy);

		if (stat(command, &buffer) == 0)
		{
			return (command);
		}
		return NULL;
	}
	return (NULL);
}
