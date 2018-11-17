#include <stdio.h>
#include <conio.h>
#include <iostream.h>
#include <string.h>

void cargar (char (*)[5]);
int buscar (char * , char (*)[5]);
void mostrar (int);

void main (void)

{   char COD[5], MAT[15][5];
    short int POS;

    clrscr();

    cargar(MAT);

    clrscr();

    cout << " Ingrese el codigo que quiera buscar: ";
    gets (COD);

    endl;

    POS = buscar(COD, MAT);

    if (POS > (-1))   mostrar(POS);

    else   cout << " No se encontro tal codigo";

    getch();
}

void cargar (char (*MAT)[5] )

{   int i;

    for (i = 0; i < 15; i++)

    {   cout << " Ingrese codigo:";
	gets(MAT[i]);
    }

    cout << endl << " Carga finalizada";
    getch();
}

int buscar (char * COD, char (*MAT)[5])

{   int i = 0, R;

    R = strcmp(MAT[i], COD);

    while ( R != 0 && i < 15)

    {   i++;
	R = strcmp(MAT[i], COD);
    }

    if (i == 15)   return -1;

    else return  i;

}

void mostrar (int POS)

{   cout << " Se encuentra en la posici¢n: " << POS + 1;
}