#include <stdio.h>
int sum_digits(int n)
{
	int sum = 0; //local variable
	
	while (n > 0){
		sum += n % 10;
		n /= 10;
	}
	return sum;
}


int main(void){
	
	printf("La suma de los digitos es: %d", sum_digits(234));
	
}
