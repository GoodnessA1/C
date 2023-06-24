#include "0-lkd_list.h"
#include <stdlib.h>
#include <stdio.h>
list_t *ptr;
void create_list(int n)
{
	list_t *ptr1, *fnptr;
	int i, val;

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
			ptr1 = (list_t *)malloc(sizeof(struct lkdlist));
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
				ptr->nextptr = NULL;

				fnptr->nextptr = ptr1;
				fnptr = fnptr->nextptr;
			}
		}
	}
}

void display_list(void)
{
	list_t *fnptr;

	if (ptr == NULL)
		puts("Nothing to display");
	else
	{
		fnptr = ptr;
		while (fnptr != NULL)
		{
			printf("Name: %s\n", fnptr->name);
			printf("ID: %d\n", fnptr->id);

			fnptr = fnptr->nextptr;
		}
	}
}
