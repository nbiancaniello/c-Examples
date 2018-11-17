#include <stdio.h>
#include <conio.h>
#include <iostream.h>

void cargar (int *);
void ordenar (int *);
int buscar (int, int *);
void mostrar (int);

void main (void)

{   int COD, VEC[15], POS;

    clrscr();

    cargar(VEC);
    ordenar(VEC);

    clrscr();

    cout << " Ingrese el codigo que quiera buscar: "; cin >> COD;

    endl;

    POS = buscar(COD, VEC);

    if (POS > (-1))

    {  mostrar(POS);
    }

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

int buscar (int DAT, int * VEC)

{   int  PRI = 0, ULT = 15, MED, POS = -1;

    while (PRI < ULT)

    {   MED = ((PRI + ULT) + (PRI + ULT)%2) / 2;

	if (* (VEC + MED) < DAT)  ULT = MED - 1;

	else

	{   if (* (VEC + MED) > DAT)  PRI = MED + 1;

	    else

	    {   POS = MED;
		PRI = ULT;
	    }

	}

    }

    return POS;
}

void mostrar (int POS)

{   cout << " Se encuentra en la posici¢n: " << POS + 1;
}

void ordenar (int * VEC)

{  int i, j, AUX, MAX;

   for (i = 0; i < 14;i++)

   {   MAX = i;

       for (j = i; j < 15;j++)

       if (* (VEC + j) > * (VEC + MAX))

       {   MAX = j;

       }

       AUX = * (VEC + MAX);
       * (VEC + MAX) = * (VEC + i);
       * (VEC + i) = AUX;

   }
}
