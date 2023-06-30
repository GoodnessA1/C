#include "0-lkd_list.h"
#include <stdlib.h>
#include <stdio.h>

list_t *ptr;
void create_list(int n)
{
	list_t *ptr1, *fnptr;
	int i;

	ptr = (list_t *)malloc(sizeof(struct lkdlist));
	if (ptr == NULL)
		puts("Memory allocation failed.\n");
	else
	{
		printf("Enter the name: ");
		scanf("%s", ptr->name);
		putchar('\n');
		printf("Enter the id: ");
		scanf("%d", &ptr->id);
		putchar('\n');
		ptr->nextptr = NULL;

		for (i = 2; i <= n; i++)
		{
			ptr1 = fnptr = (list_t *)malloc(sizeof(struct lkdlist));
			if (ptr1 == NULL)
				puts("Memory allocation failed.\n");
			else
			{
				printf("Data %i: \n", i);
				printf("Name: ");
				scanf("%s", ptr1->name);
				putchar('\n');
				printf("ID: ");
				scanf("%i", &ptr1->id);
				putchar('\n');

				fnptr->nextptr = ptr1;
				fnptr = fnptr->nextptr;
			}
		}
	}
}

void display_list(void)
{
	list_t *ptr2;

	if (ptr == NULL)
		puts("Nothing to display");
	else
	{
		ptr2 = ptr;
		while (ptr2 != NULL)
		{
			printf("Name: %s\n", ptr2->name);
			printf("ID: %d\n", ptr2->id);

			ptr2 = ptr2->nextptr;
		}
	}
}
