#include <stdio.h>
#include <conio.h>

void cargar_m(int (*m)[5]);
void ordenar_m_fila(int (*m)[5]);
void mostrar_m(int (*m)[5]);

void main()
	{
	int m[3][5];
	clrscr();
	cargar_m(m);
	printf("Matriz sin ordenar\n");
	mostrar_m(m);
	getch();
	ordenar_m_fila(m);
	printf("Matriz ordenada\n");
	mostrar_m(m);
	getch();
	}

void ordenar_m_fila(int (*m)[5])
	{
	int i,j,k,nc,aux;
	for(k=0;k<3;k++)
		for(i=0;i<4;i++)
			{
			nc=i;
			for(j=i+1;j<5;j++)
				if(m[k][j]>m[k][nc])
					nc=j;
			aux=m[k][i];
			m[k][i]=m[k][nc];
			m[k][nc]=aux;
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
	for(i=0;i<3;i++)
		{
		printf("Fila: %d",i);
		for(j=0;j<5;j++)
			{
			printf("      %d",m[i][j]);
			}
		printf("\n");
		}
	}
