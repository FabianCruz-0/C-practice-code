#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
main()
{
	printf("INTRODUCIR 10 NUMEROS PARA EL ARREGLO PARA LUEGO COMBINARLO CON UNO ALEATORIO \n");
	int i,Arr1[10],j,maximo,minimo,k,Arr2[10],Arr3[20],s,n,b,G;
	
	for(i=0;i<10;i++)
	{
		printf("Introducir digito para el arreglo: ");
		scanf("%d",&Arr1[i]);
	}
	
	minimo=Arr1[0];
	maximo=Arr1[0];
	
	for(j=0;j<10;j++)
	{
		if(Arr1[j]<minimo)
		{
			minimo=Arr1[j];
		}
		if(Arr1[j]>maximo)
		{
			maximo=Arr1[j];
		}
	}
	for(k=0;k<10;k++)
	{
		Arr2[k]= minimo + rand()%(maximo-minimo +1);
	}
	s=0;
	n=0;
	for(b=0;b<20;b++)
	{
		if(b%2==0)
		{
			Arr3[b]=Arr2[s];
			s++;
		}
		else
		{
			Arr3[b]=Arr1[n];
			n++;
		}
	}
	printf("Tu numero minimo es: %d \n",minimo);
	printf("tu numero maximo es: %d \n\n",maximo);
	printf("tu arreglo quedo: ");
	for(G=0;G<10;G++)
	{
		printf(" %d,",Arr1[G]);
	}
	printf("\n\n El arreglo aleatorio quedo: ");
	for(G=0;G<10;G++)
	{
		printf(" %d,",Arr2[G]);
	}
	printf("\n\n El arreglo intercalado con el tuyo quedo: ");
	for(G=0;G<20;G++)
	{
		printf(" %d,",Arr3[G]);
	}
	getch();
}
