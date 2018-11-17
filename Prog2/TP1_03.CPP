#include <stdio.h>
#include <conio.h>
#include <iostream.h>

void cargar (int *);
void ordenamiento (int *);
void mostrar (int *);

void main (void)

{   int VEC[10];

    clrscr();

    cargar(VEC);

    clrscr();

    ordenamiento(VEC);
    mostrar(VEC);

    getch();

}

void cargar (int * VEC)

{   int i;

    for (i = 0; i < 10; i++)

    {   cout << " Ingrese numero:"; cin >> *(VEC + i);
    }

    cout << endl << " Carga finalizada";
    getch();
}

void ordenamiento (int * VEC)

{  int i, j, AUX;

   for (i = 0; i <= 10;i++)

   {   for (j = 0; j <= 10;j++)

       if (*(VEC + j) < *(VEC + i))

       {   AUX = * (VEC+j);
	   * (VEC+j) = * (VEC+i);
	   * (VEC+i) = AUX;
       }

   }

}

void mostrar (int * VEC)

{   int i;

    for (i = 0; i < 10; i++)

    {   cout << * (VEC + i) << endl;
    }

}