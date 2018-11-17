#include <stdio.h>
#include <conio.h>
#include <iostream.h>

void cargar (int (*)[5]);
void maximo (int (*)[5]);

void main (void)

{   int MAT[3][5];

    clrscr();

    cargar(MAT);

    clrscr();

    maximo(MAT);

    getch();

}

void cargar (int (*MAT)[5])

{   int i, j;

    for (i = 0; i < 3; i++)

    {   for (j = 0; j < 5; j++)

	{   cout << " Ingrese numero: "; cin >> * ( * ( MAT + i) + j);
	}

	cout << endl;
    }

    cout << " Carga finalizada";
}

void maximo (int (*MAT)[5])

{   int i, j, MAX, POS;


    for (i = 0; i < 3; i++)

    {   MAX = * ( * ( MAT + i ) + 0);
	POS = 0;

	for (j = 1; j < 5; j++)

	{   if (MAT[i][j] > MAX)

	    {   MAX = * ( * ( MAT + i) + j);
		POS = j;
	    }
	}

	cout << " Fila: " << i + 1 << endl;
	cout << " Maximo: " << MAX << endl;
	cout << " Columna: " << POS + 1 << endl;

	cout << endl;
    }
}