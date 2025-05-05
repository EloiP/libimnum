#include "imnum.h"

//Obtiene la parte real solo
t_num	*imre(t_num *a)
{
	t_num	tmp;

	tmp = iminit(a->x, 0);
	return (&tmp);
}
