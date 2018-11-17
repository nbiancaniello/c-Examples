#include <stdio.h>
#include <conio.h>
#include <iostream.h>

void cargar (int *);
int buscar (int, int *);
void mostrar (int);

void main (void)

{   int COD, VEC[15], POS;

    clrscr();

    cargar(VEC);

    clrscr();

    cout << " Ingrese el codigo que quiera buscar: "; cin >> COD;

    endl;

    POS = buscar(COD, VEC);

    if (POS > (-1))   mostrar(POS);

    else   cout << " No se encontro tal codigo";

    getch();
}

void cargar (int * VEC)

{   int i;

    for (i = 0; i < 15; i++)

    {   cout << " Ingrese codigo:"; cin >> * (VEC + i);

	while ( (* (VEC + i) < 100) || (* (VEC + i) > 999) )

	{    cout << " Reingrese codigo:"; cin >> * (VEC + i);

	}
    }

    cout << endl << " Carga finalizada";
    getch();
}

int buscar (int COD, int * VEC)

{   int i = 0;

    while ( (* VEC + i) != COD && i < 15)

    {   i++;

    }

    if (i == 15)   return -1;

    else return  i;

}

void mostrar (int POS)

{   cout << " Se encuentra en la posici¢n: " << POS + 1;
}