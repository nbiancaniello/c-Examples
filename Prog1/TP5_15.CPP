#include <stdio.h>
#include <conio.h>
#include <iostream.h>

const char C1 [] = "La lista terminara ingresando 0 ";
const char C2 [] = "Ingrese numero: ";
const char C3 [] = "Ordenados";
const char C4 [] = "Desordenados";

void main (void)

{ int NUM, ANT, i, R;
  int DIV = 0;
  int FLAG1 = 0;
  int FLAG2 = 0;

  cout << C1 << endl;

  cout << C2; cin >> NUM;

  while ( NUM == 0)

  {  for (i=0; i<=(NUM/2) ; i++)

     R = NUM%i;

     {  if ( R == 0 )

	{ DIV++;
	}
     }

     if ( DIV == 0 )

     {  if ( FLAG1 == 0 )

	{  ANT = NUM;
	   FLAG1 = 1;
	}

	else

	{  if ( NUM > ANT )

	   {  ANT = NUM;
	   }

	   else

	   {  FLAG2 = 1;
	   }
	}
     }
  }

  if ( FLAG2 = 0 )

  {  cout << C3 << endl;
  }

  else

  {  cout << C4 << endl;
  }

  getch();

}