#include <stdio.h>
#include <conio.h>
#include <iostream.h>

void cargar (int (*)[5]);
void minimo (int (*)[5]);

void main (void)

{   int MAT[3][5];

    clrscr();

    cargar(MAT);

    clrscr();

    minimo(MAT);

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

void minimo (int (*MAT)[5])

{   int i, j, MIN, POS;


    for (j = 0; j < 5; j++)

    {   MIN = *(*(MAT + 0) + j);
	POS = 0;

	for (i = 1; i < 3; i++)

	{   if ( *(*( MAT + i) + j) < MIN)

	    {   MIN = *(*( MAT + i) + j);
		POS = i;
	    }
	}

	cout << " Columna: " << j + 1 << endl;
	cout << " Minimo: " << MIN << endl;
	cout << " Fila: " << POS + 1 << endl;

	cout << endl;
    }
}