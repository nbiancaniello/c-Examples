#include <stdio.h>
#include <conio.h>


void mostrar (struct articulo *p);
void cargar(struct articulo *p);

struct articulo
	{
	char cod_p[6];
	int pu;
	int stock;
	char rubro;
	};

void main()
	{
	struct articulo x[100];
	cargar(x);
	mostrar(x);
	getch();
	}

void cargar(struct articulo *p)
	{
	int i;
	for(i=0;i<3;i++)
		{
		scanf("%s", p[i].cod_p);
		scanf("%d", &(p+i)->pu);
		scanf("%d", &(p+i)->stock);
		scanf(" %c", &(p+i)->rubro);
		}
	}

void mostrar(struct articulo *p)
	{
	int i;
	for(i=0;i<3;i++)
		{
		printf("\n%s", (p+i)->cod_p);
		printf("\n%d", (p+i)->pu);
		printf("\n%d", (p+i)->stock);
		printf("\n%c", (p+i)->rubro);
		}
	}

