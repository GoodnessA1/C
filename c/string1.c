/*1. Given a character array in the following statement, 
char str1[] = “This is Exercise 1.”; 
write a program to copy the string from str1to another array, called str2.*/

#include <stdio.h>

int main(){
	char str1[20] = "This is Exercise 1.";
	char str2[20];
	int i;

	for (i=0; str1[i]; i++)
		str2[i] = str1[i];
	str2[i] = '\0';
	printf("This is string 1 : %s\n", str1);
	printf("This is string 2: %s\n", str2);
	

	return 0;
}
