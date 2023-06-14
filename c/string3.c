/*4. Write a program that uses the scanf()function to read in two integers entered by 
the user, adds the two integers, and then prints out the sum on the screen.*/

#include <stdio.h>

int main(){
	int x, y, z;

	printf("Enter a number:  ");
	scanf("%d", &x);

	printf("Enter another number:  ");
        scanf("%d", &y);

	z = x + y;
	printf("The sum of the numbers you entered are: %d\n", z);
	return 0;
}
