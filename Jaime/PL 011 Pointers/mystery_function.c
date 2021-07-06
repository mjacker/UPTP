#include <stdio.h>

/*
	What does this mystery program do?
	
*/

int main(void){
	//Change you number here, and check the results:
	int number = 10;
	pb(number);
}

void pb(int n)
{
	if(n != 0){
		pb(n/2);
		putchar('0' + n % 2);
	}
}
