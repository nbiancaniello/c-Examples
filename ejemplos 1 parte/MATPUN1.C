/* carga de matriz y visualizaci¢n con punteros 2*/
# include <stdio.h>
#include <conio.h>

void cargar(int (*)[5]);
void mostrar(int (*)[5]);

void main()
	{
	int mat[3][5];
	clrscr();
	cargar(mat);
	mostrar(mat);
	getch();
	}

void cargar(int m[][5]) /* o int(*m)[5]*/
	{
	int i, j;
	for(i=0;i<3;i++)
			for(j=0;j<5;j++)
			{
			printf("Ingrese un numero:");
			scanf("%d",*(m+i)+j);
			}
	 }

void mostrar(int (*m)[5])
	{
	int i,j;
	for(i=0;i<3;i++)
		for(j=0;j<5;j++)
			{
			printf("%d\n",*(*(m+i)+j));
			}
	 }
