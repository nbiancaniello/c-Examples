#include<stdio.h>
#include<conio.h>

void pone_cero(int *, int);
void carga(int *, int);
void muestra(int *,int);
void suma(int *,int *,int *, int);

void main()
	{
	int v[5],n[5],s[5];
	clrscr();
	pone_cero(v,5);
	pone_cero(n,5);
	muestra(v,5);
	carga(v,5);
	muestra(v,5);
	carga(n,5);
	muestra(n,5);
	suma(v,n,s,5);
	muestra(s,5);
//	getch();
	}

void pone_cero(int *a, int t)
	{
	int i;
	for(i=0;i<t;i++)
		a[i]=0;
	}

void carga(int *a, int t)
	{
	int i;
	for(i=0;i<t;i++)
		scanf("%d",&a[i]);
	}


void muestra(int *a, int t)
	{
	int i;
	for(i=0;i<t;i++)
	    printf("%d\n",a[i]);
	puts("\nPresione una tecla para continuar");
	getch();
	clrscr();
	}

void suma(int *a, int *b, int *c, int t)
	{
	int i;
		for(i=0;i<t;i++)
			c[i]=a[i]+b[i];
	}
