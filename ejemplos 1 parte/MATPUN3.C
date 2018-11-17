/* carga de matriz y visualizaci¢n con punteros 2*/
# include <stdio.h>
#include<conio.h>

void cargar(int (*)[5]);
void mostrar(int (*)[5]);
void carga(int (*)[5]);

void main()
	{
	int mat[3][5];
	clrscr();
	carga(mat);
	mostrar(mat);
	getch();
	}

void cargar(int (*m)[5])
	{
	int (*i)[5]=m, *j;//i se usa para no perder la referencia a la direccion de inicio de la primera fila, y que el for corte
	for(m=i;m<i+3;m++)//al incrementar m se pasa a la direccion de inicio de la proxima fila. m apunta a toda la fila
		for(j=*m;j<(*m)+5;j++)//*m es la direccion de cada una de las celdas de la fila.
			{                   // al incrementar j se tiene la direccion de cada celda dentro de la fila
			printf("Ingrese un numero:");
			scanf("%d",j);
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
//Esta funcion carga usando un solo for incrementado la direccion.
//Es posible hacerlo porque las celdas de una matriz en la memoria estan
//en posiciones contiguas. Cuando se avanza una fila (como en el caso anterior)
// lo que se hace en realidad es avanzar una cantidad de posiciones de memoria
// igual a la cantidad de columnas de la matriz
void carga(int (*m)[5])
	{
	int *i;
	for(i=(*m);i<(*m)+15;i++)
		{
			printf("Ingrese un numero:");
			scanf("%d",i);
			}
	 }
