#include <stdio.h>
//this program is still not working.

int main(void){
	int N, i;
	printf("The perfect number is a positive integer that is equal to the suem of its proper divisors.\n");
	printf("This program will calcule the perfect number from 1 to N.\n");
	printf("\n\tPlease enter the value for N: ");
	//scanf("%d", N);
	N=6;
	
	int sum=0;
	
	for (i=1; i<=N;i++)
	{
		if (is_perfect(i)); printf("%d, ", i);
	}
	return 0;
}

int  is_perfect(int num)
{
	int sum=0, i=0, lasti= 0;
	do{
		++i;
		if (num % i == 0){
			sum = sum + i;
			lasti = i;
		}
	} while(sum <= num && i <= num);
	
	//return lasti > 0? 1 : 0; lo que yo hice
	return num == sum ? 1 : 0;
}
