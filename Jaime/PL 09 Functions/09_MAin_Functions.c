#include <stdio.h>

double average(double a, double b);

int main(void){
	//##########################
	printf("Computing Averages");
	printf("______________________");
	
	//Calling the function average(a, b);
	double x, y, r;
	printf("\nIn order to calculate the average of two numbers");
	printf("\nPlease input the value of a: ");
	scanf("%lf", &x);
	printf("\nNow, please input the value of b: ");
	scanf("%lf", &y);
	
	r = average(x, y);
	printf("\n\nThe average of %g and %g is %10.5lf", x, y, r);
	
	return 0;
	
}

//FUNCTIONS
double average(double a, double b){
	return (a + b) /2;
}

