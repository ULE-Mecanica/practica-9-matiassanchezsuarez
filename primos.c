#include<stdio.h>
#include<stdlib.h>
int inicializa(int fila, int columna);
int main()
{
	int fila,colum,i,j;
	int *mat;
	printf("Introduce el numero de filas");
	scanf("%d",&fila);
	printf("Introduce el numero de columnas");
	scanf("%d",&column);
	mat=(int*)malloc((fila*colum)*sizeof(int));
	
}
int inicializa(int fila, int columna)
{
	int i,j,k,cont=0;
	for(i=0;i<fila;i++)
	{
		for(j=0;j<colum;j++)
		{
			for(k=0;k<(fila*colum);k++)
			{
				if((i*j)%i*j==0){
					cont++;}
				
			}
			if(cont==2)
			{
				mat[i][j]=i;
			}
		}
	}
}
//sin acabar
