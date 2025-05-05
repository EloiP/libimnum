#include <stdio.h>
#include "imnum.h"

void	usual()
{
	t_num i;

	i = iminit(-12, 10);
	printf("Numero complejo: ");
	printim(i, 0);
	printf("Con parte real: ");
	printim(imre(i), 0);
	printf("Con parte imaginaria: ");
	printim(imim(i), 0);
	t_num b = iminit(0, 1);
	printf("i = ");printim(b, 1);
	t_num c = immul(b, b, 0); 
	printf("i² = ");printim(c, 1);
	t_num d = imsum(b,b, 0);
	printf("i + i = ");printim(d, 1);
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
