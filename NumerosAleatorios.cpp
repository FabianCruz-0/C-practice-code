/*Programa para generar numeros aleatorios*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	srand(time(NULL));
	int i,j,minimo,maximo,n;
	printf("Favor de ingresar el rango minimo \n");
	scanf("%d",&minimo);
	printf("Favor de ingresar el rango maximo \n");
	scanf("%d",&maximo);
	printf("Favor de ingresar la cantidad de numeros aleatorios a generar \n");
	scanf("%d",&n);
	int A[n];
	for(i=1;i<=n;i++)
	{
		A[i]= minimo + rand() % ((maximo+1) - minimo);
	}
	for(j=1;j<=n;j++)
	{
		printf("%d,",A[j]);
	}
	getch();
}
