#include <stdio.h>
int *find_smallest_pointer(int *p, int n);

int main(void){
	int a[] =  {4, 33, 3, 53, 13, 23, 51, 71};
	
	printf ("\nDireccion del primer elemento del vector original: %p", &a[0]);
	
	// lenght of array a
	int n = sizeof(a)/sizeof(a[0]);
	

	printf("\nEl menor valor del vector es: %d", find_smallest(a, n));
	
	
	
	//#/# -- Seccion con punteros
	
	int *pointer_al_menor;
	
	pointer_al_menor = 	find_smallest_pointer(&a[0], n);
	
	printf("\n\n\nEl direccion del menor valor del vector es: %p", pointer_al_menor);
	
	printf("\nEl valor del puntero es: %d", *pointer_al_menor);
	
	return 0;
}

int find_smallest(int b[], int n){
	int i = 0;
	int menor = b[0];
	for (i = 1 ; i < n ; i++)
	{
		if (menor > b[i])
			menor = b[i];
	}
	
	return menor;
}

int *find_smallest_pointer(int *p, int n){
	printf("\n\n\n---El puntero recibido dentro de la funcion: %p", p);
	int i = 0;
	int *menor = p;
	for (i = 1 ; i < n ; i++)
	{
		if (*menor > *(p+i))
			menor = p+i;
	}

	return menor;
}
