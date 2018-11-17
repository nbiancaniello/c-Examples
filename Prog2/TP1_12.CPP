#include <stdio.h>
#include <conio.h>
#include <iostream.h>

void cargar (int (*)[5]);
void ordenamiento (int *);
void mostrar (int (*)[5]);

void main (void)

{   int MAT[3][5], i = 0;

    clrscr();

    cargar(MAT);

    clrscr();

    while (i < 3)

    {   ordenamiento( MAT[i]);
	i++;
    }

    mostrar (MAT);

    getch();

}

void cargar (int (*MAT)[5])

{   int i, j;

    for (i = 0; i < 3; i++)

    {   for (j = 0; j < 5; j++)

	{   cout << " Ingrese numero: "; cin >> *(*(MAT + i) + j);
	}

	cout << endl;
    }

    cout << " Carga finalizada";
}

void ordenamiento (int * VEC)

{   int i, j, MAX, AUX;

    for (i = 0; i < 2; i++)

    {   MAX = i;

	for (j = i; j < 5; j++)

	{   if (* (VEC + j) > MAX)

	    {   MAX = j;
	    }
	}

	AUX =  * (VEC + MAX);
	* (VEC + MAX) = * (VEC + i);
	* (VEC + i) = AUX;

    }
}

void mostrar (int (*MAT)[5])

{   int i, j;

    for (i = 0; i < 3; i++)

    {   for (j = 0; j < 5; j++)

	{   cout << *(*(MAT + i) + j);
	}

	cout << endl;
    }

}