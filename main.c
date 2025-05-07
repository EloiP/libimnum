#include <stdio.h>
#include "imnum.h"

void	usual()
{
	t_num i;
	t_num mult;
	t_num *syum;

//Prueba printim
	iminit(&i, -12, 10);
	printf("Numero complejo:\nForma binomica: ");printim(&i, 0);printf("\n");
	printf("Forma cartesiana: ");printim(&i, 1);printf("\n");
	printf("Forma trigonometrica: ");printim(&i, 2);printf("\n");
	printf("Forma exponencial: ");printim(&i, 3);printf("\n");
	//printf("i = ");printim(b, 1);
//Prueba immul
	iminit(&mult, 0, 0);
	syum = immul(2, &mult, &i, &i); 
	printf("i² = ");printim(syum, 1); printf(" = 44 - 240i");
	//t_num d = imsum(b,b, 0);
	//printf("i + i = ");printim(d, 1);
}

void	nonusual(int argc, char **argv, char **envp)
{
	argc=0;
	argv=NULL;
	envp=NULL;
}

int	main(int argc, char **argv, char **envp)
{
	if (argc < 2)
	{
		usual();
	}
	else 
	{
		nonusual(argc, argv, envp);
	}
}
