#include <stdio.h>
main()
{int n,i,mult;
	printf("Introducir el valor del cual se empezarán a imprimir las tablas: ");
	scanf("%d" ,&n);
	for(i=10;i>=0;)
	{
		if(n>0)
		{
			mult = n*i;
			printf("%d" ,n);
			printf("x %d" ,i);
			printf("= %d\n" ,mult);
			if(i>1)
			{
				i-=1;
			}
			else
			{
				printf("\n");
				n-=1;
				i=10;
			}
		}
	}
}

