#include<stdio.h>
#include<stdlib.h>
int validacion();
void num_digits(int);
int main(void){
	int x=0;
	x=validacion();
	num_digits(x);
	return 0;
}
int validacion(){
	int x;
	do{
		printf("Digits a positive integer:");
		scanf("%d",&x);
	}while(x<0);
	return x;
}
void num_digits(int x){
	int i=0,contador=0;
	for(i=x;i>=0;i--){
		i=i/10;
		contador++;
	}
	printf("The numbers of digits is:%d",contador);
}
