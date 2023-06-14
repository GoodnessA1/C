/*1. Given this character array: 
char array_ch[5] = {‘A’, ‘B’, ‘C’, ‘D’, ‘E’}; 
write a program to display each element of the array on the screen. */

#include <stdio.h>
int main(void){
	char array_ch1[5] = {'A', 'B', 'C', 'D', 'E'};
	char array_ch2[5];
	int i;

	for (i=0;i<5;i++)
		printf("%c\n", array_ch1[i]);

	return 0;
}
