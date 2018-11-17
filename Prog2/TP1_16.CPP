#include <stdio.h>
#include <conio.h>
#include <iostream.h>

///////////////////// Estructuras

typedef struct INFO1

{   int NTAR;
    int CANT_LLAM;
    float ABONO;
    float IMP_LLEX;
};

typedef struct INFO2

{   int ABONADO;
    float IMP;
};

///////////////////// Prototipos

void inicializar (INFO1 *);
void procesar (INFO1 *, INFO2 *, int *);
void mostrar (INFO1 *, INFO2 *, int);
int buscar1 (int, int , INFO2 *);
int buscar2 (int, INFO1 *);

///////////////////// Principal

void main (void)

{   INFO1 inform[3];
    INFO2 cliente[500];
    int TOPE = 0;    // Nos indica la cantidad de abonados ingresados

    clrscr();

    inicializar(inform);

    clrscr();

    procesar(inform, cliente, &TOPE);

    clrscr();

    mostrar(inform, cliente, TOPE);

    getch();
}

///////////////////// Inicializo la estructura de tarifas

void inicializar (INFO1 * inform)

{   int i;

    for (i = 0; i < 3; i++)

    {   cout << " Ingrese numero de tarifa: "; cin >> (inform + i)->NTAR;
	cout << " Ingrese cantidad de llamadas libres: "; cin >> (inform + i)->CANT_LLAM;
	cout << " Ingrese abono de tarifa: "; cin >> (inform + i)->ABONO;
	cout << " Ingrese importe de llamada excedida: "; cin >> (inform + i)->IMP_LLEX;
	cout << endl;
    }
}

void procesar (INFO1 * inform,INFO2 * cliente, int * TOPE)

{   int TAR, AB, CT, POS1, POS2, T;

    T = * TOPE;

    cout << " Ingrese numero de abonado: "; cin >> AB;

    POS1 = buscar1 (AB, T, cliente);   // Busca si ya existe el cliente para
				       // evitar borrar datos anteriores
    if (POS1 == (-1))

    {   (cliente + POS1)->ABONADO = AB;
	* TOPE ++;
    }

    else    cout << " ABONADO YA EXISTENTE";

    while (AB != 0)

    {    cout << " Ingrese numero de tarifa: "; cin >> TAR;

	 POS2 = buscar2 (TAR, inform);      // Busca si existe la tarifa

	 if (POS2 != -1)

	 {     cout << " Ingrese cantidad de llamadas realizadas: "; cin >> CT;

	       if (CT <= (inform + POS2)-> CANT_LLAM)

		   (cliente + POS1)->IMP = (inform + POS2)->ABONO * CT;   // No se excede de las llamadas libres

	       else

		   (cliente + POS1)->IMP = (inform + POS2)->ABONO * CT + (inform + POS2)->IMP_LLEX * ((inform + POS2)->CANT_LLAM - CT);

		   // Se excede de las llamadas libres
	 }

	 else

	 {    cout << " No existe tarifa ingresada";
	 }

	 cout << endl << " Ingrese numero de abonado: "; cin >> AB;

	 POS1 = buscar1 (AB, T, cliente);

	 if (POS1 == (-1))

	 {   (cliente + POS1)->ABONADO = AB;
	     * TOPE ++;
	 }

	 else    cout << " ABONADO YA EXISTENTE";

    }
}

void mostrar (INFO1 * inform, INFO2 * cliente, int TOPE)

{    int i;

     cout << "\t Abonado" << "\t Tarifa \t" << " Importe";

     for (i = 0; i < TOPE; i++)

     {    cout << "\t" <<  (cliente + i)->ABONADO << "\t" << (inform + i)->NTAR

	  << "\t" << (cliente + i)->IMP << endl;
     }

}

int buscar1 (int AB, int TOPE, INFO2 * cliente)

{   int i = 0;

    while (i < TOPE && AB != (cliente + i)->ABONADO)

    {   i++;
    }

    if (i != TOPE)   return  i;

    else   return -1;
}

int buscar2 (int TAR, INFO1 * inform)

{   int i = 0;

    while ((i < 3) && (TAR != (inform + i)->NTAR))

    {   i++;
    }

    if (i != 3)   return  i;

    else    return -1;

}