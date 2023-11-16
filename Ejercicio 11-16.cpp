#include <stdio.h>
#include<stdlib.h>
#include<time.h>

/*
int sumTrianguloSup(int A[][7], int row, int col)
{
	int sum=0;
	for(int i=0; i<row; i++)
	{
		for(int j=0; j<=i; j++)
		{
			sum+=A[i][j];
		}
	}
}
*/

int main()
{
	int n, i, j, suma;
	srand(time(NULL));
	
	int A[5][7];
	printf("Matriz:\n");
	for(i=0 ; i<5 ; i++)
	{
		for(j=0 ; j<7 ; j++)
		{
			A[i][j]=rand()%(9)+1;
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}
	
	int diagonal=0;
	for(i=0 ; i<5 ; i++)
	{
		for(j=0 ; j<7 ; j++)
		{
			if(i==j)
			{
				diagonal+=A[i][j];
			}
		}
		printf("\n");
	}
	printf("La suma de la diagonal es: %d", diagonal);
	
	int fila1=0;
	for(j=0 ; j<7 ; j++)
	{
		fila1+=A[0][j];
	}
	printf("\n");
	printf("La suma de la fila 1 es: %d", fila1);
	
	
	int col7=0;
	for(i=0 ; i<5 ; i++)
	{
		col7+=A[i][6];
	}
	printf("\n");
	printf("La suma de la columna 7 es: %d", col7);
	
	printf("\n");
	
	/*int fila1=0;
	for(j=0 ; j<7 ; j++)
	{
		fila1+=A[0][j];
	}
	*/
	printf("\n");
	printf("La suma de la fila 1 es: %d", fila1);
	
	int fila2=0;
	for(j=0 ; j<7 ; j++)
	{
		fila2+=A[1][j];
	}
	//printf("\nLa suma de la fila 2 es: %d", fila2);
	
	int fila3=0;
	for(j=0 ; j<7 ; j++)
	{
		fila3+=A[2][j];
	}
	printf("\n");
	printf("La suma de la fila 3 es: %d", fila3);
	
	int fila4=0;
	for(j=0 ; j<7 ; j++)
	{
		fila4+=A[3][j];
	}
	//printf("\nLa suma de la fila 4 es: %d", fila4);
	
	int fila5=0;
	for(j=0 ; j<7 ; j++)
	{
		fila5+=A[4][j];
	}
	printf("\n");
	printf("La suma de la fila 5 es: %d", fila5);
	
	
	int filai;
	filai=fila2+fila4;
	printf("\n");
	printf("La suma de las filas pares es: %d", filai);
	
	printf("\n");
	
	int col1=0;
	for(i=0 ; i<5 ; i++)
	{
		col1+=A[i][0];
	}
	
	int col2=0;
	for(i=0 ; i<5 ; i++)
	{
		col2+=A[i][1];
	}
	printf("\n");
	printf("La suma de la columna 2 es: %d", col2);
	
	int col3=0;
	for(i=0 ; i<5 ; i++)
	{
		col3+=A[i][2];
	}
	
	int col4=0;
	for(i=0 ; i<5 ; i++)
	{
		col4+=A[i][3];
	}
	printf("\n");
	printf("La suma de la columna 4 es: %d", col4);
	
	int col5=0;
	for(i=0 ; i<5 ; i++)
	{
		col5+=A[i][4];
	}
	
	int col6=0;
	for(i=0 ; i<5 ; i++)
	{
		col6+=A[i][5];
	}
	printf("\n");
	printf("La suma de la columna 6 es: %d", col6);
	
	printf("\n");
	
	int coli;
	coli=col1+col3+col5+col7;
	//printf("\n");
	printf("La suma de las columnnas impares es: %d", coli);
	
	printf("\n");
	
	printf("\nLa suma de la diagonal es: %d", diagonal);
	printf("\n");
	
	int tri1=0;
	for(int i=0; i<5; i++)
	{
		for(j=1; j<7; j++)
		{
			tri1+=A[i][j];
		}
	}
	printf("La suma del triangulo superior es: %d", tri1);
	printf("\n");
	printf("\nLa suma de la diagonal es: %d", diagonal);
	printf("\n");
	
	int tri2=0;
	for(int i=0; i<5; i++)
	{
		for(j=0; j<=i; j++)
		{
			tri2+=A[i][j];
		}
	}
	printf("La suma del triangulo inferior es: %d", tri2);
	
	
}



