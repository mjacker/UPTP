#include <stdio.h>
void max_min(int Array[], int n, int *max, int *min);

int main(void){
	int vector [] = {34, 82, 49, 102, 7, 94, 23, 11, 50, 31};
	
	int maximo;
	int minimo;
	int N =  (sizeof(vector)/sizeof(vector[0]));
	printf("N: %d", N);
	
	max_min(vector, N, &maximo, &minimo);
	
	printf("\nLargest: %d\nSmallest: %d", maximo, minimo);
	
	return 0;
}

void max_min(int Array[], int n, int *max, int *min){
	int i;
	*max = Array[0];
	*min = Array[0];
	for(i = 0; i < n; i++)
	{
		Array[i] > *max ? *max = Array[i] : 0 ;
		Array[i] < *min ? *min = Array[i] : 0 ;
	}
}
