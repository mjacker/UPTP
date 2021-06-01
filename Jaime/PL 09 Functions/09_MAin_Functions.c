#include <stdio.h>

double average(double a, double b);

int main(void){
	//##########################
	printf("COMPUTING AVERAGUES\n");
	printf("______________________\n");
	
	//Calling the function average(a, b);
	double x, y, r;
	printf("\nIn order to calculate the average of two numbers");
	printf("\nPlease input the value of a: ");
	//scanf("%lf", &x);
	x = 10;
	printf("\nNow, please input the value of b: ");
	//scanf("%lf", &y);
	y = 19;
	
	r = average(x, y);
	printf("\n\nThe average of %g and %g is %10.5lf", x, y, r);
	
	
	//##########################
	printf("\n\nFUNCTION CALLS\n");
	printf("_____________________\n");
	
	//El printf devuelve un entero con la cantidad de caracteres ingresados.
	int text_n, text_n2;
	char respuesta;
	text_n = printf ("texto de prueba\n");
	printf("Se ha retornado %d de la funcion printf.\n\n", text_n);
	
	(void) printf("texto de prueba con casting a void\n");
	printf("Se ha retornado %d de la funcion printf.\n\n", text_n2);
	
	
	//##########################
	printf("\n\nArray Arguments\n");
	printf("_____________________\n");
	int a[]={1, 2, 3, 4, 5, 6};
	
	printf("Sum array: %d", sum_array(a, sizeof(a)/sizeof(a[0])));
	
	
	//##########################
	printf("\n\nThis program ends here.\n\n\n\n");
	printf("_____________________\n");
	
	return 0;
}

//FUNCTIONS
double average(double a, double b){
	return (a + b) /2;
}

int sum_array(int v[], int n){
	int i, sum = 0;
	for (i=0; i<n;i++) sum += v[i];
	return sum;
}
