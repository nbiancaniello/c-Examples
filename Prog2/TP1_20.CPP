#include <stdio.h>
#include <conio.h>

void cargar(int (*)[5]);    	/* void cargar(int [3][5]); */
void calcular(int (*)[5],int *);  	/* void calcular(int [3][5],int [5]);  */
void mostrar(int *);

void main (void)
{
    int mat[3][5];
    int vec [5];

   cargar(mat);
   calcular(mat,vec);
   mostrar(vec);
 }

void cargar(int (*m)[5])
{
    int i,j;

    for (i=0;i<5;i++)

    {	for (j=0;j<3;j++)

	{    if (i == j)   *(*(m+j)+i)=i*j;

	     else   *(*(m+j)+i)=0;
	}
    }
}

void calcular (int (*m)[5], int *v)
{
   int i,j,cont;

   for (i=0;i<3;i++)
       {
	     cont = 0;
	for (j=0;j<5;j++)
		cont += *(*(m+i)+j);
	*(v+i)=cont;
	}
  }

void mostrar (int *h)
{
    int i;


    for (i=0;i<=2;i ++)
	printf("Resultado: %d\n", *(h+i));
    getch();
}
