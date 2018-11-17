#include<stdio.h>
#include<conio.h>

void cargar(int (*m)[5]);
void busca_max(int (*m)[5]);
void mostrar(int (*m)[5]);
void ordenar(int (*m)[5]);

void main()
	 {
		int mat[3][5],i,j;
		clrscr();
		cargar(mat);
		busca_max(mat);
		getch();
		clrscr();
		printf("la matriz desordenada esla siguiente\n");
		mostrar(mat);
		getch();
		clrscr();
		ordenar(mat);
		printf("la matriz ordenada es la siguiente\n");
		mostrar(mat);
		getch();
		}

void cargar(int (*m)[5])
	{
	int i,j;
	for(i=0;i<3;i++)
			for(j=0;j<5;j++)
			{
			printf("ingrese la fila[%d]columna[%d]: ",i,j);
			scanf("%d",&m[i][j]);
			}
	}

void busca_max(int (*m)[5])
	{
		int i,j,pos,max;
		for(i=0;i<3;i++)
			{
			pos=0;
			max=m[i][0];
			for(j=1;j<5;j++)
				if(m[i][j]>max)
					{
					max=m[i][j];
					pos=j;
					}
			printf("el maximo de la fila [%d]esta en la columna[%d]y es[%d]\n",i,pos,max);
			}
	}

void mostrar(int (*m)[5])
	{
	int i,j;
	for(i=0;i<3;i++)
		{
		for(j=0;j<5;j++)
				printf("%d\t",m[i][j]);
		printf("\n");
		}
	}

void ordenar(int(*m)[5])
	{
	int i,j,k,aux,min;
	for(i=0;i<3;i++)
		for(k=0;k<4;k++)
			 {
			 min=k;
			 for(j=k+1;j<5;j++)
					if(m[i][min]>m[i][j])
							min=j;
			 aux=m[i][k];
			 m[i][k]=m[i][min];
			 m[i][min]=aux;
			 }
	}
