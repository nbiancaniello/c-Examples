#include <stdio.h>
#include <conio.h>


void cargar(char *);// Se pasa a la funci¢n un puntero a char. Recordar
void mostrar(char *);//que una cadena de caracteres es un vector de tipo char

void main()
	{
	char cad[5];
	clrscr();
	cargar(cad);
	mostrar(cad);
	getch();
	}

void cargar(char *p)
	{
	puts("Ingrese una cadena de cuatro caracteres: ");
	gets(p);
	}

void mostrar(char *p)
	{
	puts(p);
	 }

