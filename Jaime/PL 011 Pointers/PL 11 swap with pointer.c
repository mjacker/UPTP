#include <stdio.h>
void swap(int *x, int *y);
	
int main(void){
	int a = 5, b = 7;
	
	printf("Antes del swap:\nValor de a: %d\nValor de b: %d", a, b);
	
	swap(&a, &b);
	
	printf("\n Despues del swap:\nValor de a: %d\nValor de b: %d", a, b);

	return 0;
}
	
void swap(int *x, int *y){
	int tmp = *x;
	*x = *y;
	*y = tmp;
}
