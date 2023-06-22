#include <stdio.h>

struct origin{
	char state[20];
	char country;
	union {
		char american[20] ;
		char nonamerican[20];
	} nationality;
};

typedef struct origin STO;

void dataEntry(STO *ptr1);
void dataDisplay(STO *ptr2);
/**
 * main - checks the code
 * @country_of_origin: parameter to check code
 *
 * Return: Always 0 (successful)
 */
int main(void)
{
	STO country_of_origin;

	dataEntry(&country_of_origin);
	dataDisplay(&country_of_origin);

	return (0);
}
/**
 * dataEntry - takees user data
 *
 */
void dataEntry(STO *ptr1)
{
	printf("Are you American? (y / n): ");
	scanf("%c\n", &ptr1->country);

	if (ptr1->country == 'y')
	{
		ptr1->nationality.american == "America";
	}
	else if (ptr1->country == 'n')
	{
		printf("Enter your country: ");
		scanf("%s\n", ptr1->nationality.nonamerican);
	}
	printf("Your state: ");
	scanf("%s\n", ptr1->state);
}
void dataDisplay(STO *ptr2)
{
	printf("Here is what you entered:\n");
	if (ptr2->country == 'y')
	{
		printf("Country: %s\n", ptr2->nationality.american);
		printf("State: %s\n", ptr2->state);
	}
	else if (ptr2->country == 'n')
	{
		printf("Country: %s\n", ptr2->nationality.nonamerican);
		printf("State: %s\n", ptr2->state);
	}
	else
	{
		printf("No data supplied, state required");
	}
}
