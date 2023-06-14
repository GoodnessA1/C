/*This is a address statement in c*/

#include <stdio.h>
#include <math.h>


int main(void){
	double a;

	a = 30 * 3.142 / 180;

	printf("a: address is %p, and the value is %f", &a, a);
	printf("\n");

	return 0;
}
