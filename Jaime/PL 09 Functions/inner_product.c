#include <stdio.h>
#define N 3
double inner_product(double a[], double b[], int n);

int main(void){
	double a[N]={2,2,2}, b[N]={1,2,3};
	
	printf("\n\nThe inner_product is: %0.1lf", inner_product(a, b, N));
	
	return 0;
}

double inner_product(double a[], double b[], int n)
{
	int i=0;
	double sum;
	for (i = 0; i < n; i++){
		sum += (a[i] * b[i]);
		printf("\na[%d] = %0.1lf times b[%d] = %0.1lf is \t %0.1lf", i, a[i], i, b[i], a[i]*b[i]);
	}
	return sum;
}
