#include<stdio.h>
#include<stdlib.h>
#define LEN 6

 int sum_two_dim_array(int a[ ][LEN], int n)
 {
 	int i,j,sum=0;
 	
 	for(i = 0; i < n; i++)
 		for(j = 0; j < LEN; j++)
 			sum +=a[i][j];
 	printf("Exit right a way!");
 	exit(EXIT_SUCCESS);
 	//return sum;
 	
 	return sum;
 }
 
 int main(void)
 {
 	int array[4][6]={{1, 2, 3, 4, 5, 6},
 					{7, 8, 9, 10, 11, 12},
 					{13, 14, 15, 16, 17, 18},
 					{19, 20, 21, 22, 23, 24}};
 					

 	int total =0;
 	total = sum_two_dim_array(array, 4);
 	printf("%d \n", total);
 	
 	return 0;
	 	
 }
