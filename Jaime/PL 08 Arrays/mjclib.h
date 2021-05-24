#ifndef MJCLIB_H
#define MJCLIB_H
#include <Stdio.h>

int luckyNumber();
void printVector(int v[], int size);

int luckyNumber(){
	return(8);
}

void printVector(int v[], int size){
	//Needed: (int vector, sizeof(vector))
	
	int i = 0, len = size/sizeof(v[0]);

	//Vector analisis
	/*
	printf("\nPrint the pointer: %d", v);
	printf("\nPrint the first value: %d", v[0]);
	printf("\nSize of a: %d", size);
	printf("\nSize of a[0]: %d", sizeof(v[0]));
	printf("\nLengh of a[] is: %d", len);*/
	
	//Printing the vector
	printf("{");
	for( i=0;i<len-1;i++) printf("%d, ", v[i]); printf("%d", v[len-1]);
	printf("}");
}
#endif
