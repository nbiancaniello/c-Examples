#include <stdio.h>
#include <conio.h>
#include <iostream.h>

int ingresar();
int bisiesto(int);
void mostrar(int);

void main (void)

{  int A,B;

   A = ingresar();
   B = bisiesto(A);
   mostrar(B);

}

int ingresar (void)

{   clrscr();

    int x;

    cout << "Ingrese un a¤o: "; cin >> x;
    return x;

}

int bisiesto (int y)

{   if ( (y%4 == 0) ) return 1;

    else return 0;

}

void mostrar (int z)

{   if (z) cout << endl << "Bisiesto" << endl;

    else   cout << endl << "No bisiesto" << endl;

    getch();
}