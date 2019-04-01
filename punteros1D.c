#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,min;
	int *v;
	printf("Dame un numero");
	scanf("%d",&n);
	if (n<1)
	{
		printf("ERROR");
	}
	else
	{
	v=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",&*(v+i));
	}
	min=*(v+0);
	for(i=1;i<n;i++)//se inicializa a 1 para no comparar el primer elemento con si mismo
	{
		if(*(v+i)<min);
		{
			min=*(v+i);
		}

	}
	printf("el minimo es %d",min);
	free(v);
	return 0;
	}
}
