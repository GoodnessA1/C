#include <stdio.h>
/**
 * main - writes a string into a file
 * Return: 0
 */
int main(void)
{
	char buff[] = "Disk file I/O is fun";
	FILE *ptr;
	int c, i;

	if ((ptr = fopen("test_21.txt", "w")) != NULL)
	{
		i = 0;
		while ((c = buff[i]) != '\0')
		{
			putchar(c);
			fputc(c, ptr);
			i++;
		}
		putchar('\n');
		fclose(ptr);
	}
	else
		puts("Cannot open file\n");
}
