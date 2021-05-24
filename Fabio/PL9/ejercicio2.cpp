#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
void polynomial(int);
//int polynomial(int x);
int main(void){
	int x,y;
	printf("Enter a number for the polynomial: ");
	scanf("%d",&x);
	polynomial(x);
	//y=polynomial(x);
	//printf("\n The result is: %d",y);
	
	printf("Hola, estoy corrigiendo qui tu codigo, prueba.");
	return 0;
}
void polynomial(int x){
	int result=0;
	printf("The poynomial is: 3x^5+2x^4-5x^2+7x-6");
	result=(3*pow(x,5)+2*pow(x,4)-5*pow(x,2)+7*x-6);
	printf("\nThe result is: %d",result);
}
/*int polynomial(int x){
	int result=0;
	result=(3*pow(x,5)+2*pow(x,4)-5*pow(x,2)+7*x-6);
	return result;
}*/
