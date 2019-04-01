#include<stdio.h>
#include<stdlib.h>
int main()
{
	int fila,colum,i,j,suma=0;
	int *mat;
	printf("Introduce el numero de filas");
	scanf("%d",&fila);
	printf("Introduce el numero de columnas");
	scanf("%d",&column);
	mat=(int*)malloc((fila*colum)*sizeof(int));
	for(i=0;i<fila;i++)
	{
		for(j=0;j<colum;j++)
		{
			scanf("%d",&*(mat+fila*i+j));
		}
	}
	for(i=0;i<fila;i++)
	{
		for(j=0;j<colum;j++)
		{
			suma=suma+i;
		}
	}
	printf("la matriz es: %d",&*(mat+fila*i+j));
	printf("la suma de los elementos de la matriz es:%d", suma);
	free(mat);
	return 0;
}
