#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	printf("ADIVINA QUE NUMEROS HAY EN UN ARREGLO DE TAMAÑO 10 (9), TIENES 3 INTENTOS\n");
	srand(time(NULL));
	int i,j,n,Arr[11],acerto,fallo,contador,casilla,numero;
	for(i=1;i<11;i++)
	{
		Arr[i]= rand()%(9) + 1;
	}
	acerto=0;
	fallo=0;
	contador=1;
	for(contador=1;contador<4;contador++)
	{
		printf("\n Seleccionar casilla del arreglo: ");
		scanf("%d",&casilla);
		printf("Del 1 al 10, que numero hay dentro de esa casilla?");
		scanf("%d",&numero);
		if(Arr[casilla]==numero)
		{
			acerto++;
		}
		else
		{
			fallo++;
		}
	}
	printf("Tus aciertos fueron: %d \n",acerto);
	printf("y fallos: %d \n",fallo);
	printf("El arreglo era: \n");
	for(i=1;i<11;i++)
	{
		printf(" %d,",Arr[i]);
	}
	getch();
	}	
