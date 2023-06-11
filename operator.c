/*1. Given x = 0xEFFF and y = 0x1000(that is,EFFFand 1000as hex values), what 
hex values do you get by evaluating ~xand ~y? 
2. Taking the values of xand yassigned in Exercise 1, write a program that prints 
out the values of !xand !yby using both the %dand %uformats in the printf() 
function.*/

#include <stdio.h>

int main(){
	int x,y;

	x = 0xEFFF;
	y = 0x1000;

	printf("The value of ~x is %d and ~y is %d\n", ~x,~y);
	printf("The value of !x is %d in decimal and %u\n", !x, !x);
	printf("The value of !y is %d and %u\n", !y, !y);
	return 0;

}
