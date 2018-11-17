#include <stdio.h>
#include <conio.h>
#include <iostream.h>

void main (void)

{  int f, c, i, M[3][3], VEC[9];

   clrscr();

   for (f = 0; f < 3; f++)

   {   for (c = 0; c < 3; c++)

       {   cout << " Ingrese numero: "; cin >> M[f][c];
       }
   }

   i = 0;

   for (f = 0; f < 3; f++)

   {   for (c = 0; c < 3; c++)

       {   VEC[i] = M[f][c];
	   i++;
       }

   }


   for (i = 0; i < 9; i++)

   cout << VEC[i];

   getch();
}