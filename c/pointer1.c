/*2. Write a program to update the value of the doublevariable flt_numfrom 123.45 to 543.21by using a doublepointer. 
3. Given a character variable chand ch = ‘A’, write a program to update the value of chto decimal 66by using a pointer 4. Given that x=5and y=6, write a program to calculate the multiplication of the two integers and print out the result,which is saved in x, all in the way of indirection (that is, using pointers).*/

#include <stdio.h>

int main(){
	double flt_num, *ptr_flt;
	int x, y, *ptr_x, *ptr_y;
        /*Question 2*/
	flt_num = 123.45;
	ptr_flt = &flt_num;

	printf("flt_num is %f, address is %p\n", flt_num, &flt_num);
	printf("ptr_flt is %p, address is %p\n", ptr_flt, &ptr_flt);
	*ptr_flt = 543.21;
	printf("flt_num is %f\n", flt_num);
	/* Question 4 */
	x = 5;
	y = 6;
	ptr_x = &x;
	ptr_y = &y;
	printf("x and y are %d, %d\n ", x, y);

	*ptr_x *= *ptr_y;
	printf("x * y = %d\n", x);

	return 0;
}
