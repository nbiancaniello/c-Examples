#include <stdio.h>
#include <conio.h>
#include <iostream.h>

int INGRESAR (void);
int SUMAR (int, int);
int RESTAR (int, int);
void MOSTRAR (int, int);

void main ()

{  int A, B, SUM, RES;

   A = INGRESAR();
   B = INGRESAR();
   SUM = SUMAR (A,B);
   RES = RESTAR (A,B);
   MOSTRAR (SUM,RES);
}

int INGRESAR (void)

{  clrscr();

   int N;
   cout << " Ingrese un valor: ";
   cin >> N;
   return N;
}

int SUMAR (int X, int Y)

{  int S;
   S = X + Y;
   return S;
}

int RESTAR (int X, int Y)

{  int R;
   R = Y - X;
   return R;
}

void MOSTRAR (int SUM, int RES)

{  cout << " La suma es: " << SUM << endl;
   cout << " La resta es: " << RES;
   getch();
}