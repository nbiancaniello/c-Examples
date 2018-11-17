#include <stdio.h>
#include <conio.h>
#include <iostream.h>

const char C1 [] = "Ingrese 1§ numero: ";
const char C2 [] = "Ingrese 2§ numero: ";
const char C3 [] = "N£mero Intermedio ";

void main (void)

{ int A, B, i;
  int MAX,MIN;

  clrscr();

  cout << C1; cin >> A;
  cout << C2; cin >> B;

  if ( A > B )
  {  MAX = A;
     MIN = B;
  }
  else
  {  MAX = B;
     MIN = A;
  }

  i = (MIN+1);

  do
  { cout << C3 << i << endl;
    i++;
  }

  while ( i != MAX);

  getch();

}
