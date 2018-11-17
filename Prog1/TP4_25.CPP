#include <stdio.h>
#include <conio.h>
#include <iostream.h>

const char C1 [] = " Bienvenido, estas son las siguientes opciones:";
const char C2 [] = " 'o': Obra Social";
const char C3 [] = " 'c': Contado";
const char C4 [] = " 't': Tarjeta";
const char C5 [] = " 'f': Finalizar";
const char C6 [] = " Elija una opci¢n : ";

void main (void)

{ int OB = 0; int TAR = 0; int CON = 0; int TOT = 0;
  int N, OP, R;
  int A = 30;
  int B = 10;
  int C = 15;


  do

  { clrscr();

    cout << C1 << endl;
    cout << endl;
    cout << C2 << endl;
    cout << C3 << endl;
    cout << C4 << endl;
    cout << C5 << endl;
    cout << endl;

    cout << C6;
    fflush(stdin);
    scanf("%c",&OP);

    cout << endl;

    cout << " Ingrese importe: ";
    fflush(stdin);
    scanf("%i",&N);

    switch (OP)

    {
       case 'o':
	       R = N - ( ( N * A ) / 100 );
	       OB = + R;
       break;

       case 'c':
	       R = N - ( ( N * B ) / 100 );
	       CON = + R;
       break;

       case 't':
	       R = ( ( N * C ) / 100 ) + N;
	       TAR = + R;
       break;

       case 'f':
	       TOT = OB + TAR + CON;
	       cout << " Total ganado al contado: " << CON << endl;
	       cout << " Total ganado con tarjeta: " << TAR << endl;
	       cout << " Total Facturado: " << TOT << endl;
	       break;

       default:
	      cout << "Ingrese una de las opciones indicadas entre comillas simples" << endl;
	      OP = 0;
       break;

    }

  }
  while ( OP != 'f');

  getch();

}