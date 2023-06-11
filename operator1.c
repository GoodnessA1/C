/*3. Given x = 123and y = 4, write a program that displays the results of the expressions x << yand x >> y.
*/

#include <stdio.h>

int main(){
	int x, y, z, w;
	x = 123;
	y = 4;

	z = x << y;
	printf("Value of x<<y is %d\n", z);
	w = x >> y;
	printf("Value of x>>y is %d\n", w);

	return 0;
}
