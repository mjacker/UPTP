#include <stdio.h>

//int numbers_digits(int num){
//	int sum;
//	if (num>=1)
//	{
//		printf("\nnum: %d", num);
//		//sum = sum + num % 10 ;
//		printf("\nsum: %d", sum);
//		sum = numbers_digits(num/10);
//	}
//	else
//	{
//		return 10;
//	}
//	return ++sum;
//}


int numbers_digits(int num){
	int sum;
	if (num>=1)
	{
		sum = numbers_digits(num/10) + 1 ;
	}
	else
	{
		return 0;
	}
	
	return sum;
}

int main(void){
	int n;
	printf("Enter a integer number: ");
	scanf("%d", &n);
	//n = 4321;
	
	printf("\n\nThe number of digits is: %d", numbers_digits(n));
	
	return 0;
}
