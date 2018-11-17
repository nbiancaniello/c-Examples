#include <stdio.h>
#include <conio.h>


void cargar(char (*)[5]);
void cargar1(char (*)[5]);
void mostrar(char (*)[5]);

void main()
	{
	char cad[5][5];//Matriz de char
	clrscr();
	cargar(cad);
	mostrar(cad);
	puts("\n Presione una tecla para continuar");
	getch();
	clrscr();
	cargar1(cad);
	mostrar(cad);
	getch();

	}

void cargar(char (*p)[5])
	{
	int a;
	for(a=0;a<5;a++)
		{
		puts("\nIngrese una cadena de 4 caracteres: ");
		scanf("%s",p);
		p++;
		}
	}

void mostrar(char (*p)[5])
	{
	int a;
	for(a=0;a<5;a++)
		{
		printf("%s\n",p);
		p++;//Como p es  un puntero a toda la fila al incrementarlo pasa a la fila siguiente
		}
	 }

void cargar1(char (*p)[5])
	{
	int a;
	for(a=0;a<5;a++)
		{
		puts("\nIngrese una cadena de 5 caracteres: ");
		scanf("%s",p);
		p++;
		}
	}

//Analizar cual es la diferencia entre cargar con 4 y 5 caracteres
//cada fila de la matriz