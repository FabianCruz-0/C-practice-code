#include <stdio.h>
#include <conio.h>

main()
{
	int n,i,j;
	
	printf("Introducir cantidad de alumnos");
	scanf("%d",&n);
	int tabla[n][4];
	for(i=0;i<n;i++)
	{
		for(j=0;j<4;j++)
		{
			switch(j)
			{
				case 0:
					printf("Introducir matricula: ");
					scanf("%d",&tabla[i][j]);
					break;
				case 1:
					printf("Introducir la calificacion de medio curso: ");
					scanf("%d",&tabla[i][j]);
					break;
				case 2:
					printf("Introducir la calificacion de ordinario: ");
					scanf("%d",&tabla[i][j]);
					break;
				default:
					printf("Introducir la calificacion de tareas: ");
					scanf("%d",&tabla[i][j]);
					break;
			}
		}
	}
	
	printf(" MATRI | MC | ORDI | TAREAS |\n");
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<4;j++)
		{
			printf(" [%d] ",tabla[i][j]);
		}
		printf("\n");
	}
	getch();
}
