#include <stdio.h>
#define _LEN_ 6
int main(void){
	int R, C, M[][_LEN_]={{1, 2, 3, 4, 5, 6}, {7, 8, 9, 10, 11, 12}, {13, 14, 15, 16, 17, 18}, {19, 20, 21, 22, 23, 24}};
	//se puede omitir el primer [] pero el segundo no se puede omitir[]

	//no implemented
	// Generate a random Matrix (MxN)
	/*printf("Generate and sum all items on a Matrix M*N.\n");
	printf("Please input value for Rows R: ");scanf("%d", R);
	printf("Please input value for Columns C: ");scanf("%d", C);*/
	
	printf("\n\nThe sum of all elements is: %d", sum_multi_array(M, 4));	
	
}

int sum_multi_array(int W[][_LEN_], int filas){
	int i, j, sum=0;
	for (i=0;i<filas;i++){
		for (j=0;j<_LEN_;j++){
			sum += W[i][j];
			printf("\nsum[%d][%d] = %d", i+1, j+1, W[i][j]);
		}
		j=0;
	}
	return sum;
}
