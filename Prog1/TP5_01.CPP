#include <stdio.h>
#include <iostream.h>
#include <conio.h>
#include <string.h>

const char C1 [] = " Ingrese Categor°a: ";
const char C2 [] = " Ingrese Nombre: ";
const char C3 [] = " Ingrese AntigÅedad: ";
const char C4 [] = " Total de sueldos pagados para la categor°a ";
const char C5 [] = " Sueldo Promedio: ";


void main (void)

{ int FLAG = 0;
  float ACU1 = 0; float ACU2 = 0; float ACU3 = 0; float ACU = 0;
  int CONT1 = 0; int CONT2 = 0; int CONT3 = 0;
  float i ;
  int CAT, ANTIG;
  float MAX;
  float S;
  float PROM;
  char NOM [21]; char MS [21];
  float Ca1 = 800; float Ca2 = 1000; float Ca3 = 1500;
  int ANTIGS = 50; int POS = 0;

  clrscr();

  i = 0;

  cout << C1; cin >> CAT;

  while (i<3)

  {  i++;

     cout << C2;
     gets (NOM);

     cout << C3; cin >> ANTIG;

     switch (CAT)

     { case 1:
	      S = Ca1 + ( ANTIGS * ANTIG );
	      CONT1 ++;
	      ACU1 = ACU1 + S;
	      break;

       case 2:
	      S = Ca2 + ( ANTIGS * ANTIG );
	      CONT2 ++;
	      ACU2 = ACU2 + S;
	      break;

       case 3:
	      S = Ca3 + ( ANTIGS * ANTIG );
	      CONT3 ++;
	      ACU3 = ACU3 + S;
	      break;

       default:
	       cout << " Ingrese un numero entre 1-3 ";
	       i--;
	       break;

     }

     if ( FLAG == 0 )

     {  MAX = S;
	strcpy (MS,NOM);
	POS = CAT;
	FLAG = 1;
     }

     else

     {  if ( S > MAX )

	{  MAX = S;
	   strcpy (MS, NOM);
	   POS = CAT;
	}
     }

     if (i < 3)

     {  cout << endl;
	cout << C1; cin >> CAT;
     }

  }

  getch();
  clrscr();

  cout << C4 << "1: " << ACU1 << endl;
  cout << C4 << "2: " << ACU2 << endl;
  cout << C4 << "3: " << ACU3 << endl;

  cout << endl;

  cout << " En categor°a 1 hay " << CONT1 << " empleados" << endl;
  cout << " En categor°a 2 hay " << CONT2 << " empleados" << endl;
  cout << " En categor°a 3 hay " << CONT3 << " empleados" << endl;

  cout << endl;

  ACU = ACU1 + ACU2 + ACU3;

  PROM = ACU / i;

  cout << C5 << PROM << endl;

  cout << endl;

  cout << " Empleado con mayor sueldo: " << MS << endl;
  cout << " Su sueldo es de : " << MAX << endl;
  cout << " Pertenece a la categor°a: " << POS << endl;

  getch();

}
