#include <stdio.h>
int main(void){
	int *pointer, variable;

	variable = 22;

	printf("Direccion de la variable:  %p", &variable);
	printf("\nValor de la variable: %d", variable);

	pointer = 2;

	printf("\n\nDireccion del pointer:  %p", pointer);
	printf("\nValor de la variable: %d", *pointer);

	variable = 11;

	printf("\n\nDireccion de la variable:  %p", pointer);
	printf("\nValor de la variable: %d", *pointer);

	*pointer = 2;
	printf("\n\nDireccion de la variable:  %p", &variable);
	printf("\nValor de la variable: %d", variable);

	return 0;
}
