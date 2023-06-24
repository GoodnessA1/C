#include "0-lkd_list.h"
#include <stdio.h>

int main(void)
{
	int n;

	printf("Enter the amount of data you want to enter: ");
	scanf("%i", &n);
	create_list(n);
	display_list();

	return (0);
}
