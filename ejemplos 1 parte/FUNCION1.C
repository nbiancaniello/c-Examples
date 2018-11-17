#include<stdio.h>
#include<conio.h>

void leer(int *);
int sumar(int,int);
void mostrar(int);

void main()
	{
	int a,b,c;
	clrscr();
	leer(&a);
	leer(&b);
	c=sumar(a,b);
	mostrar(c);
	getch();
	}

void leer(int *a)
	{
	scanf("%d",a);
	}

int sumar(int a, int b)
	{
	int c;
	c=a+b;
	return c;
	}

void mostrar(int a)
	{
	printf("%d",a);
	}
