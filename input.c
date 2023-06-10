/*This file get input from keyboard*/
#include <stdio.h>

int main(void){
	int ch;

	printf("Enter just one character:\t");
	ch = getc(stdin);
	printf("The char is %c\n", ch);
	printf("Value of char is %d\n", ch);

	return 0;
}
