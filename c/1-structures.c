#include <stdio.h> 
#include <string.h> 
struct survey { 
	char name[20];
	union {
		char state[32];
		char country[32];
	} place;
};
void DataEnter(struct survey *s);
void DataDisplay(struct survey *s);
int main(void)
{ 
	char y;
	struct survey citizen;
	puts("Ready?");
	getchar(y);
	DataEnter(&citizen);
	DataDisplay(&citizen);
	return 0;
}
/* definition of DataDisplay() */
void DataDisplay(struct survey *ptr)
{
	printf("\nHere is what you entered: \n");
	printf("Your name is %s.\n", ptr->name);
	printf("You are from %s.\n", ptr->place.state);
	printf("\nThank you!\n");
}
/* definition of DataEnter() */
void DataEnter(struct survey *ptr)
{
	char is_yes[4];
	printf("Please enter your name:\n");
	scanf("%s", ptr->name);
	printf("Are you a U. S. citizen? (Yes or No)\n");
	scanf("%s", is_yes);
	if ((is_yes[0] == 'Y') || (is_yes[0] == 'y'))
	{
		printf("Enter the name of the state:\n");
		scanf("%s", ptr->place.state);
	}
	else
	{
		printf("Enter the name of your country:\n");
		scanf("%s", ptr->place.country);
	}
}
