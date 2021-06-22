#include <stdio.h>
void decompose(double x, int *integer, double *fraction);
	
int main(void){
	double pi = 3.14159;
	
	int int_part;
	double frac_part;
	
	decompose(pi, &int_part, &frac_part);
	
	printf("Value of: \n\tpi: %lf \n\tint_part: %d \n\tfrac_part: %lf", pi, int_part, frac_part);
	
	return 0;
}

void decompose(double x, int *integer, double *fraction){
	*integer = (int) x;
	*fraction = x - *integer;
}
