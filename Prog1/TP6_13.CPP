#include <stdio.h>
#include <conio.h>
#include <iostream.h>

int CP = 0, CN = 0;

int ingresar (void);
int primo (int);
void mostrar (int, int);

void main (void)

{   int A, B;

    textcolor(YELLOW);

    A = ingresar ();

    while ( A > 0)

    {  B = primo (A);

       if (B)  CP++;

       else   CN++;

       A = ingresar();

    }

    mostrar (CP,CN);
}

int ingresar (void)

{   int x;

    clrscr();

    cout << "Ingrese un numero: "; cin >> x;

    return x;
}

int primo (int y)

{  int i = 2, FLAG = 0;

   while ( i <= y/2 && FLAG == 0)

   {   if ( (y%i) == 0)  FLAG = 1;

       i++;
   }

   if (FLAG) return 0;

   else return 1;

}

void mostrar(int x, int y)

{  cout << endl << " Cantidad Primos: " << x << endl;
   cout << " Cantidad no Primos: " << y << endl;

   getch();

}