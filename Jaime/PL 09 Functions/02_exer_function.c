#include <stdio.h>
//////////////////////////////////////////////////////////////////////////////////
/* 2. Write a function num_digits(n) that returns the number of digits in n
	(a positive integer). The n number is entered by the user.
	Hint: To determine the number of digits in a number n,
	divide it by 10 repeatedly, When n reacher 0, the number of divisions 
	indicates how many digits n originally had. */
/////////////////////////////////////////////////////////////////////////////////

//Functions declarations
unsigned long int num_digits(unsigned long int n);

int main(void){
	unsigned long int num = 0;
	
	printf("Enter a number, I will return the number of digits.\nN = ");
	scanf("%lu", &num);
	
	printf("\n\nThe number of digits in %lu is: %lu", num, num_digits(num));
	
	return 0;	
}

unsigned long int num_digits(unsigned long int n){
	unsigned long int i;
	
	while (n>0)
	{
		n /= 10;
		++i;
	}
	return i;
}
