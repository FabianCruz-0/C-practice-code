#include <stdio.h>
#include <conio.h>
main()
{
	int i,j,k,Arr[100],n,aux;
		printf("Selecciona el limite de tu arreglo: ");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		printf("Ingresar numero: ");
		scanf("%d", &Arr[i]);
	}
	printf("tu arreglo quedo: ");
	for (i=0;i<n;i++)
	{
		printf("%d, ",Arr[i]);
	}
	printf("\nPares primero de MENOR a MAYOR y primos de MAYOR a MENOR: ");
	for(i=0;i<n;i++)
	{		
		for(j=i+1;j<n;j++)
		{
			if(Arr[i]>Arr[j])
			{
				aux=Arr[i];
				Arr[i]=Arr[j];
				Arr[j]=aux;
			}
		}	
	}
	for(i=0;i<n;i++)
	{
		if(Arr[i]%2==0)
		printf("%d, ",Arr[i]);
	}
	for(i=0;i<n;i++)
	{		
		for(j=i+1;j<n;j++)
		{
			if(Arr[i]<Arr[j])
			{
				aux=Arr[i];
				Arr[i]=Arr[j];
				Arr[j]=aux;
				}
			}
		}
	for(i=0;i<n;i++)
	{
		if(Arr[i]%2==1)
		printf("%d, ",Arr[i]);
		}
	
	getch();
}
