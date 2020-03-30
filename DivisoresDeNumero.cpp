#include <stdio.h>
#include <conio.h>
main()
{
	int n,i;
	float residuo;
	printf("Insertar un valor y a continuacion se enlistaran sus divisores (entero positivo).");
	scanf("%d" ,&n);
	if(n>=0)
	{
	
	for(i=1;i<=n;i++)
	{
		residuo=n%i;
		if(residuo==0)
		{
			if(i!=n)
			{
				printf("%d ," ,i);
			}
			else
			printf("%d." ,i);
			
		}
	}
	}
	else
	printf("Eror. Debe ser numero entero positivo.");
	getch();
}
