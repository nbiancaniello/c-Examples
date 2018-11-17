#include <stdio.h>
#include <conio.h>
#include <iostream.h>

void ingresar (int, int*);
int maximo (int, int*);
void mostrar (int, int*);

void main (void)

{   int  VEC[10], P;

    ingresar (10, VEC);
    P = maximo (10, VEC);
    mostrar (P, VEC);
}

void ingresar (int T, int * V)

{   register i;

    clrscr();

    for ( i=0; i<T ; i++ )

    {   cout << " Numero: ";
	cin >> * (V + i);
    }
}

int maximo (int T, int * V)

{   int POSM;
    register i;

    POSM = 0;

    for ( i=0; i<T ; i++ )

    {   if ( * (V + i) > * (V + POSM)) POSM = i;
    }

    return POSM;
}

void mostrar (int POSM, int * V)

{   cout << endl << " El valor maximo es: " << * (V + POSM);
    getch();
}