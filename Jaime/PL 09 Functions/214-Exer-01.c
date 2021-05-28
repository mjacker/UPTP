#include <Stdio.h>

double triangle_area(double base, double height);

int main(void){
	
	double base, altura, area;
	printf("Este programa calcula el area de un triangulo.\n");
	printf("Ingresa la base: ");scanf("%lf", &base);
	printf("\nIngresa la altura: ");scanf("%lf", &altura);
	
	area = triangle_area(base, altura);
	
	printf("\nEl area es: %f", area);
	
	return 0;
}


double triangle_area(double base, double height){
	double product;
	product = base * height;
	return product / 2;
}
