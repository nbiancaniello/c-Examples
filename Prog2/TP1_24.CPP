#include <stdio.h>
#include <conio.h>
#define EOS '\0'

void quehace(char *,char *);

void main (void)
{
 char cad1[30],cad2[30];
 int cant;

 clrscr();
 printf("Ingrese una cadena.\n");
 gets(cad1);
 printf("Ingrese una cadena.\n");
 gets(cad2);
 quehace(cad1,cad2);
 printf("El resultado es: \n");
 puts(cad1);
}
void quehace(char *s,char *t)
{
 char *p,*fin,*r;
 for (p=s;*p;p++)
       ;
 fin=p;
 for (r=t;*r;r++)
      ;
 for (p=t;*fin++=*p;p++)
       ;
 return r-t;
}
