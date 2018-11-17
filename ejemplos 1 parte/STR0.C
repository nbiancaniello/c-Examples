#include <stdio.h>
#include <conio.h>

void main()
	{
	int a;
	char cad[5];
	clrscr();
	printf("Ingrese una cadena: ");
	scanf("%s",cad);     //printf y scanf con el formato %s
	printf("%s\n",cad);

	fflush(stdin); //limpia el buffer del teclado. scanf() deja el caracter enter en el buffer
	puts("\n");
	puts("Ingrese una cadena: ");// Uso de las funciones para cadenas puts y gets()
	gets(cad);
	puts(cad);

	for(a=0;a<5;a++)//ingreso de la cadena caracter a caracter
		{
		printf("\nIngrese un caracter: ");
		scanf(" %c",(cad+a));
		}
	for(a=0;a<5;a++)// muestra la cadena caracter a caracter
			{
			printf("%c",*(cad+a));
			}
	getch();
	}

//Nota: probar introduciendo un espacio en blanco (barra espaciadora).
//Analizar la diferencia cuando se usa scanf() con un espacio en blanco
//entre 2 caracteres, y cuando se usa gets()