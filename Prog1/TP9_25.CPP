#include <stdio.h>
#include <conio.h>
#include <iostream.h>
#include <string.h>

void inicializar (int, int, int *, char (*)[30], int (*)[6]);
void procesar (int (*)[6]);
void ordenar (int, int *, char (*)[30], int (*)[6]);
void mostrar (int, int, int *, int (*)[6]);

void main (void)

{   char MNE[3][30];
    int VNE[3];
    int MPJ[3][6];

    clrscr();

    inicializar(3, 6, VNE, MNE, MPJ);

    clrscr();

    procesar (MPJ);
    ordenar(3, VNE, MNE, MPJ);

    clrscr();

    mostrar(3, 6, VNE, MPJ);

    getch();
}

void inicializar (int x, int y, int * VNE, char (*MNE)[30], int (*MPJ)[6])

{   register f, c;

    for (f = 0; f < x; f++)

    {   * (VNE + f) = (f+1);

	cout << endl << " Ingrese Nombre de equipo n§ " << f+1 << ": ";
	gets(MNE[f]);

	for (c = 0; c < y; c++)

	{   MPJ[f][c] = 0;

	}
    }
}

void procesar (int (*MPJ)[6])

{   int  N1, G1, N2, G2;

    cout << endl << " Ingrese n§ de equipo 1: "; cin >> N1;

    while ( N1 != 0)

    {   cout << " Ingrese cantidad de goles de equipo 1: "; cin >> G1;
	cout << " Ingrese n§ de equipo 2: "; cin >> N2;
	cout << " Ingrese cantidad de goles de equipo 2: "; cin >> G2;

	MPJ[N1 - 1][3] += G1;
	MPJ[N1 - 1][4] += G2;
	MPJ[N2 - 1][3] += G2;
	MPJ[N2 - 1][4] += G1;

	if (G1 == G2)

	{   MPJ[N1 - 1][5] += 1;
	    MPJ[N2 - 1][5] += 1;

	    MPJ[N1 - 1][1] += 1;
	    MPJ[N1 - 1][1] += 1;
	}

	else

	{   if (G1 > G2)

	    {   MPJ[N1 - 1][5] += 3;
		MPJ [N1 - 1] [0] += 1;

		MPJ [N2 - 1] [2] += 1;
	    }

	    else

	    {   MPJ[N2 - 1][5] += 3;
		MPJ [N2 - 1] [0] += 1;

		MPJ [N1 - 1] [2] += 1;

	    }
	}

    cout << endl << " Ingrese n§ de equipo 1: "; cin >> N1;

    }
}

void ordenar (int x, int * VNE, char (*MNE)[30], int (*MPJ)[6])

{   int MAX, AUX1, AUX2[6], f, c, i, j;
    char AUX3[30];

    for  (f = 0; f < (x - 1); f++)

    {    MAX = f;

	 for ( c = (f +1); c < x; c++)

	 {   if ( MPJ[c][5] > MPJ[MAX][5] )   MAX = c;
	 }

	 AUX1 = * (VNE + MAX);
	 * (VNE + MAX) = * (VNE + f);
	 * (VNE + f) = AUX1;

	 for (i = 0; i < 3; i++)

	 {   for (j = 0; j < 6; j++)

	     {   * (AUX2 + j) = MPJ[MAX][j];
		 MPJ[MAX][j] = MPJ[f][j];
		 MPJ[f][j] = * (AUX2 + j);
	     }
	 }

	 strcpy(AUX3,MNE[MAX]);
	 strcpy(MNE[MAX],MNE[f]);
	 strcpy(MNE[f],AUX3);
    }
}

void mostrar (int x, int y, int * VNE, int (*MPJ)[6])

{   register f,c;

    cout << "Equipos" << "\t" << "Ganados" << "\t" << "Empatados" <<
    "\t" << "Perdidos" << "\t" << "A favor" << "\t" << "En contra" <<
    "\t" << "Puntos";

    for (f = 0; f < x; f++)

    {   cout << endl << *(VNE + f);

	for (c = 0; c < y; c++)

	{   cout << "\t" << MPJ[f][c];
	}
    }
}
