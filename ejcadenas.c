#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char cadena1[100],cadena2[100];
	printf("Introduce la cadena 1");
	fgets(cadena1,100,stdin);
	printf("Introduce la cadena 2");
	fgets(cadena2,100,stdin);
 	if(strlen(cadena1)==strlen(cadena2))
	{
			if (strcmp(cadena1,cadena2)==0)
			{
				printf("son iguales");
			}
			else
			{
				strcpy(cadena1,cadena2);
				printf("la cadena es: %c", cadena2);
			}
	}
	else
	{
		strcpy(cadena1,cadena2);
		printf("la cadena es: %c", cadena2);
	}
}
