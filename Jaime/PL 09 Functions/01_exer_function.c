#include <stdio.h>

double polynomial(double a);

int main(void){
	double x;
	printf("I will compute the value of the following polymonial: \n\t\t3x^5+2x^4-5x^3-x^2+7x-6\nPlease enter a value for x: ");
	scanf("%lf", &x);
	
	printf("\nThe value is: %.0f", polynomial(x));	
}

double polynomial(double a){
	return ((3*a*a*a*a*a)-(2*a*a*a*a)-(5*a*a*a)-(a*a)+(7*a)-(6));
}
