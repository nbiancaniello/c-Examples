#include <stdio.h>
#include <conio.h>
#include <iostream.h>

typedef struct VECTOR

{   int VEC1[10];
    int VEC2[10];

};

void cargar (VECTOR *, int *, int *);
void ordenamiento (VECTOR *, int *, int *);
void mostrar_paralelo (int *,int *);
void mostrar_estructura (VECTOR *);

void main (void)

{   int VECA[10];
    int VECB[10];

    VECTOR REG;

    clrscr();

    cargar(&REG,VECA,VECB);

    clrscr();

    ordenamiento(&REG,VECA, VECB);

    clrscr();
    cout << " \t Vectores en paralelo";

    mostrar_paralelo(VECA, VECB);

    clrscr();
    cout << " \t Estructura de vectores";

    mostrar_estructura (&REG);

    getch();

}

void cargar (int * REG, int * VECA, int * VECB)

{   int i;

    for (i = 0; i < 10; i++)

    {   cout << " Ingrese numero:"; cin >> REG.VEC1[i];
	VECA[i] = REG.VEC1[i];

	VECB[i] = i + 1;
	REG.VEC2[i] = i + 1;

    }

    cout << endl << " Carga finalizada";
    getch();
}

void ordenamiento (int * REG, int * VECA, int * VECB)

{  int i, j, AUX;

   for (i = 0; i <= 10;i++)

   {   for (j = 0; j <= 10;j++)

       if (REG.VEC1[i] < REG.VEC1[j])

       {   AUX = REG.VEC1[j];
	   REG.VEC1[j] = REG.VEC1[i];
	   REG.VEC1[i] = AUX;

	   AUX = REG.VEC2[j];
	   REG.VEC2[j] = REG.VEC2[i];
	   REG.VEC2[i] = AUX;

	   AUX = * (VECA + j);
	   * (VECA + j) = * (VECA + i);
	   * (VECA + i) = AUX;

	   AUX = * (VECB + j);
	   * (VECB + j) = * (VECB + i);
	   * (VECB + i) = AUX;
       }

   }

}

void mostrar_paralelo (int * VECA, int * VECB)

{   int i;

    cout << " Vector " << "\t" << " Posici¢n " << endl;

    for (i = 0; i < 10; i++)

    {   cout << * (VECA + i) << "\t" << * (VECB + i) << endl;
    }

}

void mostrar_paralelo (int * REG)

{   int i;

    cout << " Vector " << "\t" << " Posici¢n " << endl;

    for (i = 0; i < 10; i++)

    {   cout << REG.VEC1[i] << "\t" << REG.VEC2[2] << endl;
    }

}