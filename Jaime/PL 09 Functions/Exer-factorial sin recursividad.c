#include <stdio.h>
int factorial(int n)
{
	int resultado = 1, i;
	for (i=n; i>=1;i--){
		resultado *= i;
	}
	return resultado;
}

int main(void)
{
	
  int x, result;
  x = 3;
  printf("The number %d and its factorial is: ", x);
  result= factorial(x);
  printf(" %d ", result );
  return 0;
}
