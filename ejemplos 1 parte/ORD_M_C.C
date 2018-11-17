#include <stdio.h>
#include <conio.h>

void cargar_m(int (*m)[5]);
void ordenar_m_col(int (*m)[5]);
void mostrar_m(int (*m)[5]);

void main()
	{
	int m[3][5];
	clrscr();
	cargar_m(m);
	printf("Matriz sin ordenar\n");
	mostrar_m(m);
	getch();
	ordenar_m_col(m);
	printf("Matriz ordenada\n");
	mostrar_m(m);
	getch();
	}

void ordenar_m_col(int (*m)[5])
	{
	int i,j,k,nf,aux;
	for(k=0;k<5;k++)
		for(i=0;i<2;i++)
			{
			nf=i;
			for(j=i+1;j<3;j++)
				if(m[j][k]>m[nf][k])
					nf=j;
			aux=m[i][k];
			m[i][k]=m[nf][k];
			m[nf][k]=aux;
			}
	}

void cargar_m(int (*m)[5])
	{
	int i,j,n;
	for(i=0;i<3;i++)
		for(j=0;j<5;j++)
			{
			printf("Ingrese un n£mero: ");
			scanf("%d",&n);
			m[i][j]=n;
			}
	}

void mostrar_m(int (*m)[5])
	{
	int i,j;
	for(i=0;i<5;i++)
		{
		printf("Columna: %d",i);
		for(j=0;j<3;j++)
			{
			printf("\t%d",m[j][i]);
			}
		printf("\n");
		}
	}
