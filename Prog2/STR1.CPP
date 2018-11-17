#include <stdio.h>
#include <conio.h>
#include <iostream.h>
#include <string.h>

/////////////////////// Estructura

struct Articulo

{   char COD[5];
		char DESC[30];
		float PU;
		int STOCK;
};

/////////////////////// Prototipos

void cargar (Articulo *);
void mostrar (Articulo *);

/////////////////////// Principal

void main (void)

{   Articulo ART[5];

		clrscr();

		cargar (ART);

		clrscr();

		mostrar (ART);
}

void cargar (Articulo * ART)

{   int i;

		for (i = 0; i < 5; i++)

		{   cout << " Ingrese codigo: "; cin >> (ART + i)->COD;
				cout << " Ingrese descripcion: ";  cin >> (ART + i)->DESC;
				cout << " Ingrese precio unitario: "; cin >> (ART + i)-> PU;
				cout << " Ingrese stock: "; cin >> (ART + i)->STOCK;

				cout << endl;
		}

}

void mostrar (Articulo * ART)

{   int i;

		for (i = 0; i < 5; i++)

		{   cout << endl << "Articulo " << i + 1 << endl << endl;

				cout << " Codigo: " << (ART + i)->COD << endl;
				cout << " Descripcion: " << (ART + i)->DESC << endl;
				cout << " Precio unitario: " << (ART + i)->PU << endl;
				cout << " Stock: " << (ART + i)->STOCK << endl;

				cout << endl;
				getch();
		}

}