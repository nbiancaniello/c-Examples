#include<stdio.h>
#include<conio.h>

void pone_cero(int *);
void carga(int *);
void muestra(int *);

void main()
	{
	int v[5];
	clrscr();
	pone_cero(v);
	muestra(v);
	carga(v);
	muestra(v);
	getch();
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
		scanf("%d",&a[i]);
	}


void muestra(int *a)
	{
	int i;
	for(i=0;i<5;i++)
		printf("%d\n",a[i]);
	}
