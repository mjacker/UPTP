#include <stdio.h>

int main(void){
	int a, b;
	printf("This program compute the gcd of a and b:. \n");
	printf("Please enter value for a: ");scanf("%d", &a);
	printf("\nPlease enter value for b: ");scanf("%d", &b);
	//a=1701;b=3768; //this is an example.
	
	
	printf("\n\n\tThe gcd of (%d, %d) is %d", a, b, gdc(a, b));
}

int gdc(int x, int y){
	//If y is greater than x, we swap it.
		int aux=x;
		if (x<y){
			x=y;	//this block we can upgrade with swap function.
			y=aux;
		}
	
	//variable declarations
	int resto, cosiente, resultado;
	do
	{
		//computing the rest and the quotient.
		resto = x % y;
		cosiente = (x-resto)/y;
		
		//prueba de escritorio - imprimir cada paso del calculo.
		printf("\nResto: %d\tcosiente: %d", resto, cosiente);
		
		//cath the last divisor before lossing it.
		resto == 0 ? resultado = y : 0 ;
		
		//preparing the next value to compute and start again.
		x = y ;
		y = resto;
		
	}while (resto>0);
	
	return resultado;
}

