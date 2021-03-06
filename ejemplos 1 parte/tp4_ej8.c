//archivos de cabercera
#include <stdio.h>
#include <conio.h>
#include <string.h>
//fin de archivos de cabecera

//definici�n de la estructura de registros
struct articulo
{
	char codart[5];//el c�digo es de 4. Se agrega 1 para el terminador �\0�
	float pu;
	int meses[12];
	};
//fin de la definici�n de la estructura de registros

//prototipos de funciones
void poner_ceroa(float (*)[24] );
void poner_cero_c(int (*)[12] );
void cargar_art(struct articulo * );
void cargar_vend(int * );
int buscar(struct articulo *, char * );
void mostrar_a(float (*)[24] );
void mostrar_b(struct articulo * );
void mostrar_c(int (*)[12]);
void procesar (float (*)[24], int (*)[12], struct articulo * ,int *) ;
//fin de prototipos de funciones

void main()
	{
	float m[12][24];
	int mv[300][12], vvend[300];
	struct articulo vart[200];
	poner_ceroa(m);
	poner_cero_c(mv);
	cargar_art(vart);
	cargar_vend(vvend);
	procesar(m,mv,vart,vvend);
	mostrar_a(m);
	mostrar_b(vart);
	mostrar_c(mv);
	getch();
	}


//funciones
void poner_ceroa(float (*m)[24] )
	{
	int i,j;
	for(i=0;i<12;i++)
		for(j=0;j<24;j++)
			m[i][j]=0;
	}


void poner_cero_c(int (*mv)[12] )
	{
	int i,j;
	for(i=0;i<300;i++)
		for(j=0;j<12;j++)
			mv[i][j]=0;
	}


void cargar_art(struct articulo *vart )
	{
	int i,j;
	for(i=0;i<200;i++)
		{
		scanf("%s", vart[i].codart);
		scanf("%f", &vart[i].pu);
		for(j=0;j<12;j++)
			vart[i].meses[j]=0;
		}
	}
		

void cargar_vend(int *vvend )
	{
	int nprov, nvend,i;
	for(i=0;i<300;i++)
		{
		scanf("	%d",&nvend);
		scanf("%d",&nprov);
		vvend[nvend-1]=nprov;
		}
	}
	




int buscar(struct articulo *vart, char *codart )
	{
	int i;
	for(i=0;i<200;i++)
		if(strcmp(vart[i].codart, codart)==	0)
			return i; //cuando encuentra el c�digo vuelve a la funci�n que llam�

	return -1;//devuelve -1 si no encontr� el c�digo en el vector
	}

void mostrar_a(float (*m)[24] )
	{
	int i,j;
	for(i=0;i<12;i++)
		{
		printf("Mes: %d",i+1);
		for(j=0;j<24;j++)
			printf("\nProvincia: %d \t Total recaudado: %f", j+1,m[i][j]);
		}
	}
void mostrar_b(struct articulo *vart )
	{
	int i,j;
	for(i=0;i<12;i++)
		{
		printf("Mes: %d",i+1);
		for(j=0;j<200;j++)
			{
			printf("\nArt�culos sin ventas: ");
			if(vart[j].meses[i]==0)
				printf("\t %s", vart[i].codart);
			}
		}
	}












void mostrar_c(int (*mv)[12])
{
int i,j,cont_ceros=0, cont_terna=0;
for(i=0;i<300;i++)
	{
for(j=0;j<12;j++)
		{
		if(mv[i][j]==0)
			{
cont_ceros++;
			if(cont_ceros==3)
				{
				cont_terna++;
				cont_ceros=0;
				}
			}
		else cont_ceros=0;
		}
	if(cont_terna>0)
printf("\nEl vendedor %d, estuvo inactivo", i+1);
	}
}				
	
void procesar (float (*m)[24], int (*mv)[12], struct articulo *vart ,int *vvend) 
	{
	int mes, nvend,cant,pos;
	char codart[5];
	scanf("%d",&mes);
	while(mes!=0)
		{
		scanf("%d",&nvend);
		scanf("%s", codart);
		scanf("%d",&cant);
		pos=buscar(vart, codart);
	m[mes-1][vvend[nvend-1]-1]+=cant*vart[pos].pu;//punto a 
	vart[pos].meses[mes-1]=1; // punto b
	mv[nvend-1][mes-1]=1; // punto c
		scanf("%d",&mes);
	}
}

// fin funciones
