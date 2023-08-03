#include <stdio.h>
#include "main.h"

int main(void)
{
	char *s = "10";

	int i = binary_to_uint(s);
	printf("10 to decimal is : %i\n", i);
}
