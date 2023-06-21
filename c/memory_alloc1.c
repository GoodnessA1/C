#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Does a lot
 *
 * return: 0 if successful
 */
int main(void)
{
	int i, *ptr, terminate, max;
	int sum = 0;

	printf("Enter the number:  ");
	scanf("%d\n", &max);
	ptr = malloc(max * sizeof(int));
	if (ptr == NULL)
	{
		printf("Memory allocation failed\n");
		terminate = 1;
	}

	else
	{
		for (i = 0; i < max;)
		{
			sum = sum + i;
			i++;
		}
		printf("The result is %i\n", sum);
		free(ptr);
		terminate = 0;
	}
	return terminate;
}
