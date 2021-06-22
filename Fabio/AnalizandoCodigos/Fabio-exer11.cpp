#include<stdio.h>
int main(void){
	int a[] = {6, 16, 35, 55, 15, 3, 54, 73};
	int *p = &a[1], *q = &a[5];
	//p=p+3;
	printf("%d",*(p + 3));
	
	printf("\n%p",q-p);
	
	if(p==q){
		printf("\ntrue");
	}else{
		printf("\nfalse");
	}
	
	if(*p>*q){
		printf("\ntrue");
	}else{
		printf("\nfalse");
	}
	return 0;
}
