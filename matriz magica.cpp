#include <stdio.h>

bool magico(int matriz[3][3])
{
	int sumas[4];
	
	sumas[0]=matriz[0][0]+matriz[0][1]+matriz[0][2];
	sumas[1]=matriz[1][0]+matriz[1][1]+matriz[1][2];
	sumas[2]=matriz[2][0]+matriz[2][1]+matriz[2][2];
	sumas[3]=matriz[0][0]+matriz[1][1]+matriz[2][2];
	
	for(int i=1; i<4; i++)
	{
		if(sumas[i]!=sumas[0])
		{
			return false;
		}
	}
	
	return true;
}

int main()
{
	int matriz[3][3];
	
	printf("Introduzca los elementos de la matriz: \n");
	
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			scanf("%d ", &matriz[i][j]);
		}
	}
	
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
	
	if(magico(matriz))
	{
		printf("La matriz es magica");
	}
	else
	{
		printf("La matriz no es magica");
	}
	
	
	int col1=0;
	for(int i=0; i<3 ; i++)
	{
		col1+=matriz[i][0];
	}
	printf("\n");
	printf("La suma de la columna 1 es: %d", col1);
	
	int col2=0;
	for(int i=0 ; i<3 ; i++)
	{
		col2+=matriz[i][1];
	}
	printf("\n");
	printf("La suma de la columna 2 es: %d", col2);
	
	int col3=0;
	for(int i=0 ; i<3 ; i++)
	{
		col3+=matriz[i][2];
	}
	printf("\n");
	printf("La suma de la columna 3 es: %d", col3);
	
	int fila1=0;
	for(int j=0 ; j<3 ; j++)
	{
		fila1+=matriz[0][j];
	}
	printf("\n");
	printf("La suma de la fila 1 es: %d", fila1);
	
	int fila2=0;
	for(int j=0 ; j<3 ; j++)
	{
		fila2+=matriz[1][j];
	}
	printf("\nLa suma de la fila 2 es: %d", fila2);
	
	int fila3=0;
	for(int j=0 ; j<3 ; j++)
	{
		fila3+=matriz[2][j];
	}
	printf("\n");
	printf("La suma de la fila 3 es: %d", fila3);
	
	return 0;
}
