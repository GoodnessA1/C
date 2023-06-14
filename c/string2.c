/*2. Write a program to measure the length of a string by evaluating the elements in a 
character array one by one until you reach the null character. To prove you get the 
right result, you can use the strlen()function to measure the same string again.*/

#include <stdio.h>

int main(){
	char str[] = "This is a string";
	int i;

	for (i=0; str[i]; i++);
	printf("This is the length of str: %d\n", i+1);

	return 0;
}
