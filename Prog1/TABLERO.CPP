#include <stdio.h>
#include <conio.h>
#include <iostream.h>
#include <stdlib.h>


void main (void)

{  register f,c;
   int MAT[9][9];
   int j=0, k=8;


   clrscr();

   for (f=0; f < 9; f++)

   {   for (c=0; c < 9; c++)


       {   if ((f%2 == 0) && (c%2 == 1) || (f%2 == 1) && (c%2 == 0))

	   {  MAT[f][c] = 1;
	   }

	   else

	   {  MAT[f][c] = 0;
	   }
       }
   }

   for (f=0; f < 9; f++)

   {   for (c=0; c < 9; c++)

       {   cout << MAT[f][c];
       }

       cout << endl;
   }

   for (f=0; f < 9; f++)

   {   for (c=0; c < 9; c++)

       {   if (f == c)

	   {  MAT[f][c] = 1;
	   }

	   else

	   {  MAT[f][c] = 0;
	   }

	   if (f == j && c == k)

	   {  MAT[f][c] = 1;
	      j++;
	      k--;
	   }

       }
   }

   cout << endl;

   for (f=0; f < 9; f++)

   {   for (c=0; c < 9; c++)

       {   cout << MAT[f][c];
       }

       cout << endl;
   }

   getch();
}