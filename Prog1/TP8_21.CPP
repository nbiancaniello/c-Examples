#include <stdio.h>
#include <conio.h>
#include <iostream.h>

void ingresar (int *, int *);
void sumar (int *, int *, int *);
void mostrar (int *);

void main (void)

{   int VEC1[10], VEC2[10], SUMA[10];

    ingresar (VEC1, VEC2);
    sumar (VEC1, VEC2, SUMA);
    mostrar (SUMA);
}

void ingresar (int * A, int * B)

{   register i;

    clrscr();

    for (i=0; i<10; i++)

    {   cout << "VEC1: "; cin >> * (A + i);
	cout << "VEC2: "; cin >> * (B + i);
    }
}

void sumar (int * A, int * B, int * SUMA)

{   register i;

    for (i=0; i<10; i++)

    {  * (SUMA+i) = * (A+i) + * (B+i);
    }
}

void mostrar (int * SUMA)

{   register i;

    for (i=0; i<10; i++)

    {  cout << endl << * (SUMA + i);
    }

    getch();
}
