#include <stdio.h>
#include <conio.h>
#include <iostream.h>
#include <string.h>
#include <iomanip.h>

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
int buscar (char *, Articulo *);

/////////////////////// Principal

void main (void)

{   Articulo ART[5];

    clrscr();

    cargar (ART);

    clrscr();

    procesar (ART);
}

///////////////////// Inicializacion de la estructura

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

///////////////////// Menu de compra

void procesar (Articulo * ART)

{   int R, CANT, i;
    char COD[5];

    cout << " \t  \t Bienvenido" << endl;

    cout << " Ingrese codigo: "; gets(COD);

    R = strcmp (COD, "FIN");

    while ( R != 0)

    {    i = buscar (COD, ART); /// Mando la Estructura completa porque no se en que posicion se encuentra el codigo

	 if (i != -1)

	 {    cout << " Ingrese Cantidad: "; cin >> CANT;
	      cout << endl;

	      if (CANT <= (ART + i)->STOCK)

	      {    cout << " Articulo a comprar: " << (ART + i)->DESC << endl;  ///  Descripcion

		   cout << " Precio de la compra: ";
		   cout << setprecision(2);
		   cout << setiosflags(ios::showpoint) << ((ART + i)->PU) * CANT;  ///  de la compra

		   (ART + i)->STOCK -= CANT;  /// Disminuye el stock
	      }

	      else   cout << " No se puede realizar compra, stock insuficiente";

	      cout << endl;

	      getch();
	 }

	 else

	 {    cout << " Codigo inexistente" << endl << endl;
	      getch();
	 }

	 clrscr();

	 cout << " Ingrese codigo: ";
	 fflush(stdin);
	 scanf("%s", &COD);

	 R = strcmp (COD, "FIN");
    }

    cout << " Gracias por su compra";
    getch();
}

int buscar (char * DAT, Articulo * ART)

{     int i = 0;

      while ( ( strcmp ( ( ART + i )->COD, DAT ) != 0 ) && i < 5)

      {   i++;
      }

      if (i != 5)   return i;

      else   return -1;
}