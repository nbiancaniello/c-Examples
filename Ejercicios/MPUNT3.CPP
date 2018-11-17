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

{   int (*a)[3], *p;

		a = MAT;

		for (p = *a; p < (*a + 9); p++)

		{    cout << "Ingrese un numero: "; cin >> *p;
		}

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