/*Programa para jugar piedra papel o tijera*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int A,r;
	srand(time(NULL));
	r=rand()%3;
	printf("Favor de ingresar el numero de la opcion que desea jugar \n");
	printf("0. Piedra \n");
	printf("1. Papel \n");
	printf("2. Tijera \n");
	scanf("%d",&A);
	if (A==0 || A==1 || A==2)
	{
	switch(A)
	{
		case 0:
			printf("Tu opcion es piedra \n");
			if(r==0)
			{
				printf("La opcion de la maquina es piedra \n");
				printf("Esto termina en empate \n");
			}
			if(r==1)
			{
				printf("La opcion de la maquina es papel \n");
				printf("Gana la maquina \n");
			}
			if(r==2)
			{
				printf("La opcion de la maquina es tijera \n");
				printf("Tu ganas \n");
			}
	break;
		case 1:
			printf("Tu opcion es papel \n");
			if(r==0)
			{
				printf("La opcion de la maquina es piedra \n");
				printf("Tu ganas \n");
			}
			if(r==1)
			{
				printf("La opcion de la maquina es papel \n");
				printf("Esto termina en empate \n");
			}
			if(r==2)
			{
				printf("La opcion de la maquina es tijera \n");
				printf("Gana la maquina \n");
			}
	break;
		case 2:
			printf("Tu opcionn es tijera \n");
			if(r==0)
			{
				printf("La opcion de la maquina es piedra \n");
				printf("La maquina gana \n");
			}
			if(r==1)
			{
				printf("La opcion de la maquina es papel \n");
				printf("Tu ganas \n");
			}
			if(r==2)
			{
				printf("La opcion de la maquina es tijera \n");
				printf("Esto termina en empate \n");
			}
	break;
	}
}
else
{
	printf("favor de seleccionar un numero valido.");
}
	getche();
}
