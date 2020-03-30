#include<stdio.h>
#include<conio.h>
main()
{
	int n,i,j,k,Arr[100];
	
	printf("Introducir un numero limite para el arreglo: ");
	scanf("%d",&n);
	if (n>100)
	printf("Digite un limite menor que 100.");
	
	for (i=0;i<n;i++)
	{
		printf("introducir numero: ");
		scanf("%d",&Arr[i]);
	}
	printf("Tu arreglo quedo: ");
	for (j=0;j<n;j++)
	{
		printf("%d, ",Arr[j]);
	}
	printf(" \n De manera inversa, PARES primero y luego PRIMOS queda: ");
	for (k=n-1;k>=0;k--)
	{
		if(Arr[k]%2==0)
		printf("%d, ",Arr[k]);
	}
	for (k=n-1;k>=0;k--)
	{
		if(Arr[k]%2!=0)
		printf("%d, ",Arr[k]);
	}
	getch();
}
