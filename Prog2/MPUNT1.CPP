#include<stdio.h>
#include<conio.h>
#include<iostream.h>

/////////////////////// Prototipos

void cargar (int (*)[3]);
void mostrar (int (*)[3]);

/////////////////////// Principal

void main (void)

{   int MAT[3][3];

		clrscr();

		cargar(MAT);

		clrscr();

		mostrar(MAT);

		getch();

}

/////////////////////// Funcion para cargar

void cargar (int  (*MAT)[3])

{   int i, j;

		for (i = 0; i < 3; i++)

		{    for (j = 0; j < 3; j++)

				 {    cout << "Ingrese un numero: "; cin >> *(*(MAT+i)+j);

				 }

				 cout << endl;
		}

		cout << " Carga finalizada";

}

/////////////////////// Funcion para mostrar

void mostrar (int (*MAT)[3])

{    int i, j;

		 for (i = 0; i < 3; i++)

		{    for (j = 0; j < 3; j++)

				 {    cout << *(*(MAT+i)+j);

				 }

				 cout << endl;
		}

}