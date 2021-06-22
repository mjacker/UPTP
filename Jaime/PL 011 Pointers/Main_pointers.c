#include <stdio.h>

int main(void){
	int x, y, a[10], b[20];
	int *pointer;
	double *q;
	char *r;
	
	x = 17;
	
	pointer = &x;
	
	printf("La direccion de x en memoria es: %d", pointer);
	
	printf("Imprimiendo el valor al que el puntero esta apuntando: %d", *pointer);
	return 0;
}
