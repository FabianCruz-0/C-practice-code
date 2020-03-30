#include <stdio.h>
#include <conio.h>
main()
{
	int n,i,j,k,num[50], apunta,aux,a;
	
	printf("Introducir limite del arreglo: ");
	scanf("%d",&n);
	if (n<0)
	printf("debe ser numero positivo");
	for(i=0;i<n;i++)
	{
		printf("Introducir numero: ");
		scanf("%d",&num[i]);
	}
	for(k=n-1;k>1;k--)
	{
		apunta=k;
		
		for(j=k-1;j>=0;j--)
		{
			if(num[j]<num[apunta])
			apunta=j;
		}
		if(k!=apunta)
		{
		aux=num[apunta];
		num[apunta]= num[k];
		num[k]=aux;
		}
	}
	printf("Tu arreglo ordenado de MAYOR a MENOR quedo: ");
	for (a=0;a<n;a++)
	{
		printf("%d, ",num[a]);
	}
	getch();
}
