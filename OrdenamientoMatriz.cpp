#include<stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h> //srand, rand
main()
{
	srand(time(NULL));
	int i,j,fil,col;
	
	printf("Introducir la cantidad de filas: \n");
	scanf("%d",&fil);
	printf("Introducir la cantidad de columnas: \n");
	scanf("%d",&col);
	int Arr[fil][col];
	
	for(i=0;i<fil;i++)
	{
		for(j=0;j<col;j++)
		{
		Arr[i][j]=rand()%101;
		}
	}
	
	//impresión de la matriz desodenada.
	printf("\nLa matriz quedo asi:\n");
	for(i=0;i<fil;i++)
	{
		for(j=0;j<col;j++)
		{
		printf(" [%d] ",Arr[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
	
	//Ordenamiento de la matriz.
	int aux;
	for(i=0;i<fil;i++)
	{
		for(j=0;j<col;j++)
		{
			for(int i1=i;i1<fil;i1++)
			{
				int caux = 0;
				if (i==i1)
				{
					caux = j+1;
				}
				for(int j1=caux;j1<col;j1++)
				{
					if(Arr[i][j]>Arr[i1][j1])
					{
						aux = Arr[i][j];
						Arr[i][j]=Arr[i1][j1];
						Arr[i1][j1]=aux;
					}
				}
			}
		}
	}
	
	//Impresión de la matriz ordenada.
	printf("\n\n La matriz ordenada quedo: \n");
	
	for(i=0;i<fil;i++)
	{
		for(j=0;j<col;j++)
		{
		printf(" [%d] ",Arr[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
	getch();
}
