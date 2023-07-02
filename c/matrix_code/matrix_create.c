#include "main.h"
#include <stdio.h>
/**
 * matrix_creation - Creates the matrix
 * @n: dimension of matrix
 * @c: dimension of matrix
 */
void matrix_creation(int c, int n)
{
	int a11, a12, a13, a21, a22, a23, a31, a32, a33;

	
	if (c < 2 || n < 2)
	{
		puts("Could not create matrix\n");
	}
	else
	{
		if (c == 2 && n == 2)
		{
			printf(" a11  a12\n");
			printf(" a21  a22\n");
			printf("Enter a11, a12, a21, a22\n");
			printf("Put a space inbetween pls\n");
			scanf("%d%d%d%d", &a11, &a12, &a21, &a22);
			printf("%d\t%d\n", a11, a12);
			printf("%d\t%d\n", a21, a22);
		}
		else if (c == 3 && n == 3)
		{
			printf(" a11  a12  a13\n");
			printf(" a21  a22  a23\n");
			printf(" a31  a32  a33\n");
			printf("Enter a11, a12, a13, a21\n");
			printf("Put a space inbetween pls\n")
;
			scanf("%d%d%d%d", &a11, &a12, &a13, &a21);
			printf("Enter a22, a23, a31, a32, a33\n");
			scanf("%d%d%d%d%d", &a22, &a23, &a31, &a32, &a33);
			printf("%d\t%d\t%d\n", a11, a12, a13);
			printf("%d\t%d\t%d\n", a21, a22, a23);
			printf("%d\t%d\t%d\t\n", a31, a32, a33);
		}
	}
}
