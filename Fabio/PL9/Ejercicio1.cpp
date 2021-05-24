#include<stdio.h>
#include<stdlib.h>
//void num_digits();
int num_digits(unsigned int);
int main(void){
	unsigned int x=0,y=0;
	do{
		printf("Digits a positive integer:");
		scanf("%u",&x);
	}while(x<0);
	//num_digits(x);
	y=num_digits(x);
	printf("The numbers of digits is:%u", y);
	return 0;
}
/*void num_digits(int x){
	int i=0,contador=0;
	for(i=x;i>=0;i--){
		i=i/10;
		contador++;
	}
	printf("The numbers of digits is:%d",contador);
}*/
int num_digits(unsigned int x){
	unsigned int contador=0,i=0;
	for(i=x;i>=0;i--){
		i=i/10;
		contador++;
	}
	return(contador);
}
