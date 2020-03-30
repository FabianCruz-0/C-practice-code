#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
main()
{
	srand(time(NULL));
	
	int i,limite,minimo,maximo,j,aux;
	
	printf("Introducir el numero de elementos del arreglo: ");
	scanf("%d",&limite);
	
	int Arr[limite];
	
	printf("Introducir el minimo dentro del rango para los numeros aleatorios: ");
	scanf("%d",&minimo);
	printf("Introducir el maximo dentro del rango para los numeros aleatorios: ");
	scanf("%d",&maximo);
	
	for(i=0;i<limite;i++)
	{
		Arr[i]=minimo + rand()%(maximo-minimo); 
	}
	
	//impresion del vector desordenado
	for(i=0;i<limite;i++)
	{
		printf("%d, ",Arr[i]);
	}
	printf("\n\n");
	
	//ordenamiento del vector
	for(i=0;i<limite-1;i++)
	{
		for(j=i+1;j<limite;j++)
		{
			if(Arr[i]>Arr[j])
			{
				aux=Arr[i];
				Arr[i]=Arr[j];
				Arr[j]=aux;
			}
		}
	}
	//impresion del vector ordenado
	for(i=0;i<limite;i++)
	{
		printf("%d, ",Arr[i]);
	}
	
	getch();
}
