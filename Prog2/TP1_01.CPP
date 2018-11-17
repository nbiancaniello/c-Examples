#include <stdio.h>
#include <conio.h>
#include <iostream.h>

void cargar (int *);
int maximo (int *, int *);

void main (void)

{   int VEC[10];
    int MAX, CANT = 1 , * CT ;

    CT = & CANT;

    clrscr();

    cargar(VEC);

    clrscr();

    MAX = maximo(VEC, CT);

    cout << " El m ximo es: " << VEC[MAX] << endl;

    if (* CT > 1)

    {   cout << endl << " Se repite " << * CT << " veces";
    }

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

int maximo (int * VEC, int * X)

{   int i, MAX = 0;

    for (i = 1; i < 10; i++)

    {   if (*(VEC + i) > *(VEC + MAX))

	{   MAX = i;
	    * X = 1;
	}

	else

	{   if (*(VEC + i) == *(VEC + MAX))   * X += 1;

	}

    }

    return MAX;
}