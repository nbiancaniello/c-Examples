#include <stdio.h>
#include <conio.h>
#include <iostream.h>

///////////////////// Estructuras

typedef struct LOTE1

{   int NTAR;
    float IMP;
    int TTAR;
};

typedef struct LOTE2

{   int NCAM;
    int TCAM;
    int REC;
};

///////////////////// Prototipos

void inicializar (LOTE1 *, LOTE2 *);
void procesar (LOTE1 *, LOTE2 *);
int buscar1 (int, LOTE1 *);
int buscar2 (int, LOTE2 *);
void mostrar1 (LOTE1 *);
void mostrar2 (LOTE2 *);
void mostrar3 (LOTE2 *);

void main (void)

{   LOTE1 lt1[3];
    LOTE2 lt2[3];

    clrscr();
    inicializar (lt1, lt2);

    clrscr();
    procesar (lt1, lt2);

    clrscr();
    mostrar1 (lt1);
    getch();

    clrscr();
    mostrar2 (lt2);
    getch();

    clrscr();
    mostrar3 (lt2);
    getch();

}

void inicializar (LOTE1 * lt1, LOTE2 * lt2)

{   int i;

    for (i = 0; i < 3; i++)

    {   cout << " Ingrese Numero de tarifa: "; cin >> (lt1 + i)->NTAR;
	cout << " Ingrese importe por Km: "; cin >> (lt1 + i)->IMP;
	(lt1 + i)->TTAR = 0;
	cout << endl;
    }

    for (i = 0; i < 3; i++)

    {   cout << " Ingrese Numero de camion: "; cin >> (lt2 + i)->NCAM;

	while ((lt2 + i)->NCAM < 1000 || (lt2 + i)->NCAM > 9999)

	{    cout << " Ingrese Numero de camion: "; cin >> (lt2 + i)->NCAM;

	}

	(lt2 + i)->TCAM = 0;
	(lt2 + i)->REC = 0;
	cout << endl;
    }

}

void procesar (LOTE1 * lt1, LOTE2 * lt2)

{   int NC, NT, KM, POS1, POS2;

    cout << " Ingrese N§ de camion: "; cin >> NC;

    while ( NC != 0 )

    {   POS2 = buscar2(NC, lt2);

	if (POS2 != (-1))

	{   cout << " Ingrese N§ de tarifa: "; cin >> NT;

	    POS1 = buscar1(NT, lt1);

	    if (POS2 != (-1))

	    {    cout << " Ingrese Km recorridos: "; cin >> KM;

		 lt1[POS1].TTAR = KM * lt1[POS1].IMP;
		 lt2[POS2].TCAM = KM * lt1[POS1].IMP;
		 lt2[POS2].REC += KM;
	    }

	}

	cout << endl << " Ingrese N§ de camion: "; cin >> NC;

    }

}

int buscar1 (int COD, LOTE1 * lt1)

{   int i = 0;

    while (i < 3 && lt1[i].NTAR != COD)

    {   i++;
    }

    if (i != 3)   return i;

    else   return (-1);

}

int buscar2 (int COD, LOTE2 * lt2)

{   int i = 0;

    while (i < 3 && lt2[i].NCAM != COD)

    {   i++;
    }

    if (i != 3)   return i;

    else   return (-1);

}

void mostrar1 (LOTE1 * lt1)

{   int i;

    for (i = 0; i < 3; i++)

    {    cout << " Recaudacion tarifa " << lt1[i].NTAR << ": " << lt1[i].TTAR << endl;
    }

}

void mostrar2 (LOTE2 * lt2)

{   int i, j, POS, AUX;

    for (i = 0; i < 2; i++)

    {   POS = i;

	for (j = i; j < 3; j++)

	{   if (lt2[j].TCAM > lt2[POS].TCAM)    POS = j;
	}

	AUX = lt2[POS].TCAM;
	lt2[POS].TCAM = lt2[i].TCAM;
	lt2[i].TCAM = AUX;

    }

    for (i = 0; i < 3; i++)

    {    cout << " Recaudacion camion " << lt2[i].NCAM << ": " << lt2[i].TCAM << endl;
    }

}

void mostrar3 (LOTE2 * lt2)

{   int i, MIN = 0;

    for (i = 1; i < 3; i++)

    {   if (lt2[i].REC != 0)

	{    if (lt2[i].REC < lt2[MIN].REC)   MIN = i;

	}

    }

    cout << " Numero de camion que hizo el menor recorrido: " << lt2[MIN].NCAM;

}