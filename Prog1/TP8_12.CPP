#include <stdio.h>
#include <conio.h>
#include <iostream.h>

void ingresar (int , int *);
void ordenamiento (int , int *);
void mostrar (int, int *);

void main (void)

{   int VEC[10];

    ingresar (10, VEC);
    ordenamiento (10, VEC);
    mostrar (10,VEC);
}

void ingresar (int T , int * V)

{   register i;

    clrscr();

    for ( i=0; i<T ; i++)

    {   cout << "Numero: "; cin >> * ( V+i );
    }
}

void ordenamiento (int T, int * V)

{   register i, j;
    int POS, AUX;

    for ( i=0; i < (T-1) ; i++)

    {   POS = i;

	for ( j= (i+1) ; j < T ; j++)

	{  if ( V[j] > V [POS]) POS = j;
	}

	AUX = V[i];
	V[i] = V[POS];
	V[POS] = AUX;
    }
}

void mostrar (int T,int * V)

{  register i;

   for (i=0; i<T ; i++)

   {   cout << endl << * (V+i);
   }
   getch();

}
