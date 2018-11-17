#include<stdio.h>
#include<conio.h>

void pone_cero(int *);
void carga(int *);
void muestra(int *);
void suma(int *,int *,int *);

void main()
	{
	int v[5],n[5],s[5];
	clrscr();
	pone_cero(v);
	pone_cero(n);
	muestra(v);
	carga(v);
	muestra(v);
	carga(n);
	muestra(n);
	suma(v,n,s);
	muestra(s);
	}

void pone_cero(int *a)
	{
	int i;
	for(i=0;i<5;i++)
		a[i]=0;
	}

void carga(int *a)
	{
	int i;
	for(i=0;i<5;i++)
		{
		printf("\nIngrese un n£mero entero: ");
		scanf("%d",&a[i]);
		}
	}


void muestra(int *a)
	{
	int i;
	for(i=0;i<5;i++)
			printf("%d\n",a[i]);
	printf("\nPresione una tecla para continuar");
	getch();
	clrscr();
	}

void suma(int *a, int *b, int *c)
	{
	int i;
		for(i=0;i<5;i++)
			c[i]=a[i]+b[i];
	}
