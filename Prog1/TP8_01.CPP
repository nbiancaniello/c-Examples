#include <stdio.h>
#include <conio.h>
#include <iostream.h>

void ingresar(int*, int*);
int sumar (int, int);
void mostrar(int);

void main (void)

{   int SUM, A, B;

    ingresar( &A, &B);
    SUM = sumar(A,B);
    mostrar(SUM);
}

void ingresar (int*x, int*y)

{   clrscr();

    cout << " Ingrese 1§ numero: ";
    cin >> *x;
    cout << endl << " Ingrese 2§ numero: ";
    cin >> *y;
}

int sumar (int x,int y)

{   int S;

    S = x + y;

    return S;
}

void mostrar (int S)

{   cout << endl << " La suma es: " << S;
    getch();
}