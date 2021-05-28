#include <stdio.h>

int main(void){
	int a, b, n;
	do{
	
		printf("\n\nI will check if a or b are less than n-1\n");
		printf("\nEnter value for a: ");scanf("%d", &a);
		printf("\nEnter value for b: ");scanf("%d", &b);
		printf("\nEnter value for n: ");scanf("%d", &n);
		
		printf("\n\n\tCalling the Check() function...");
		printf("\n\tThe function return the value: %d.", check(a, b, n));
		printf("\n\n\t Please enter n = 0 to exit.");

	}while(n!=0);
	return 0;
}

int check(int a, int b, int n){
	return (((n-1>a) && (a>0)) || ((n-1>b) && (b>0))) ? 1: 0;	 
}

