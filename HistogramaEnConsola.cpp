#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
main()
{
	printf("HISTOGRAMA EN CONSOLA DE 10 NUMEROS\n");
	int i,j,c,Arr[10];
	
	for(i=0;i<10;i++)
	{
		printf("Introducir un numero para el histograma: ");
		scanf("%d",&Arr[i]);
	}
	for(j=0;j<10;j++)
	{
		printf("\n %d",Arr[j]);
		for(c=0;c<Arr[j];c++)
		{
			printf(" * ");
		}
	}
	getch();
}
