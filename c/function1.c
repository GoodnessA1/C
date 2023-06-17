#include <stdio.h>
#include <time.h>
/**
 * GetDateTime - To get date and time of local computer
 *
 */

void GetDateTime(void);

/**
 * main - Function call
 * Return: 0
 */
int main(void)
{
	printf("Before function call\n");
	GetDateTime();

	printf("After function call\n");

	return 0;
}

void GetDateTime(void)
{
	time_t now;
	char *str;
	int i;

	printf("Within the function now\n");
	time(&now);
	str = asctime(localtime(&now));
	printf("Today\'s date and time is: \n");
	for (i=0; str[i]; i++)
		printf("%c", str[i]);
}
