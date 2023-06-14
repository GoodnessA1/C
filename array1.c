/*3. Given this two-dimensional unsized array: 
char list_ch[][2] = { 
‘1’, ‘a’, 
‘2’, ‘b’, 
‘3’, ‘c’, 
‘4’, ‘d’, 
‘5’, ‘e’, 
‘6’, ‘f’}; 
write a program to measure the total bytes taken by the array, and then print out all 
elements of the array.*/

#include <stdio.h>

int main(void){
	char list_ch[][2] = {
		'1', 'a',
		'2', 'b',
		'3', 'c',
		'4', 'd',
		'5', 'e',
		'6', 'f',
	};
	int size, i, j;
	size = sizeof(char) * 12;
	printf("Size of array is %d\n", size);
	for (i=0;i<6;i++){
		printf("\n");
		for (j=0;j<2;j++)
			printf("%6c\n", list_ch[i][j]);
	};
	return 0;
}
