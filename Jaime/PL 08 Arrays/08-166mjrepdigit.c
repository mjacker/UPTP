#include <stdio.h>
#include "mjclib.h"

int main(void)
{
	int num=0, pos=1, k=0, i=0, j=0, flag=0;
	
	//Ingresar un numero
		printf("Enter a number: ");
		scanf("%d", &num);
		//num = 4321;
	
	//contando digitos
		while (num>pos)
		{
			pos = pos * 10;
			k = k + 1;
		}
		pos=pos/10; //el pos anterior ya ha pasado.
	
	//inicializar un vector de k elementos
		int *vector;
		vector = (int*)malloc(k*sizeof(int));
	
	//verificar si se consigue memoria para cargar el vector.
		if (vector == NULL)	printf("\n[No se puede inicializar le vector.]");
		else printf("\n[Se pudo inicializar el vector.]");
	
	//cargar los digitos al vector
		for (i = 0; i < k; i++)
		{
			vector[i]= (int)(num/pos);
			num = num - (vector[i]*pos);
			pos=pos/10;
		}
	
	//imprimir el vector con un for
		//for (i=0;i<k;i++){
		//	printf("\nv[%d]: %d", i, vector[i]);
		//}
	
	// imprimir a travez de libreria mjclib.h
			printf("\n\nVector final: \n\n\t");
			printVector(vector, sizeof(int)*k);
		
	//checkrepdigit
		printf("\n\n\nComparaciones realizadas: \n");
		for(i = 0; i < k - 1 ; i++)
		{
			for(j = i + 1; j < k ; j++)
			{
				printf("v[%d][%d] ", i, j);
				if (vector[i]==vector[j])
				{
					flag=vector[i];
					break;
				}
			}
			printf("\n");
		}
	
	// imprimir mensaje final
		(flag > 0) ? printf("\nRepeated digit: %d", flag):printf("\nNo repeated digit");
	
		
	return 0;
}

