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
void procesar (Articulo *);
int buscar (char *, char *);

/////////////////////// Principal

void main (void)

{   Articulo ART[5];

    clrscr();

    cargar (ART);

    clrscr();

    procesar (ART);
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

void procesar (Articulo * ART)

{   int R, CANT, i;
    char COD[5];

    cout << " \t  \t Bienvenido" << endl;

    cout << " Ingrese codigo: "; gets(COD);

    R = strcmp (COD, "FIN");

    while ( R != 0)

    {    i = buscar (COD, ART->COD);

	 cout << " Ingrese Cantidad: "; cin >> CANT;

	 if (CANT <= (ART + i)->STOCK)

	 {    cout << " Articulo a comprar: " << (ART + i)->DESC << endl;
	      cout << " Precio de la compra: " << ((ART + i)->STOCK) * CANT;

	      (ART + i)->STOCK -= CANT;
	 }

	 else   cout << " No se puede realizar compra, stock insuficiente";

	 getch();

	 cout << " Ingrese codigo: "; cin >> (ART + i)->COD;

	 R = strcmp ((ART + i)->COD, "FIN");
    }

}

int buscar (char * DAT, char ART->COD)

{     int R, i = 0;

      R = strcmp ((ART + i)->COD, DAT)

      while (R != 0 && i < 5)

      {   i++;

      }

      if (i != 5)   return i;

      else   return -1;
}